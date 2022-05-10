/**
 *    Copyright (C) 2018-present MongoDB, Inc.
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the Server Side Public License, version 1,
 *    as published by MongoDB, Inc.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    Server Side Public License for more details.
 *
 *    You should have received a copy of the Server Side Public License
 *    along with this program. If not, see
 *    <http://www.mongodb.com/licensing/server-side-public-license>.
 *
 *    As a special exception, the copyright holders give permission to link the
 *    code of portions of this program with the OpenSSL library under certain
 *    conditions as described in each individual source file and distribute
 *    linked combinations including the program with the OpenSSL library. You
 *    must comply with the Server Side Public License in all respects for
 *    all of the code used other than as permitted herein. If you modify file(s)
 *    with this exception, you may extend this exception to your version of the
 *    file(s), but you are not obligated to do so. If you do not wish to do so,
 *    delete this exception statement from your version. If you delete this
 *    exception statement from all source files in the program, then also delete
 *    it in the license file.
 */

#include "mongo/platform/basic.h"

#include "mongo/db/auth/authorization_session.h"

#include <string>
#include <vector>

#include "mongo/base/shim.h"
#include "mongo/base/status.h"
#include "mongo/db/auth/action_set.h"
#include "mongo/db/auth/action_type.h"
#include "mongo/db/auth/authz_session_external_state.h"
#include "mongo/db/auth/privilege.h"
#include "mongo/db/auth/restriction_environment.h"
#include "mongo/db/auth/security_key.h"
#include "mongo/db/auth/user_management_commands_parser.h"
#include "mongo/db/bson/dotted_path_support.h"
#include "mongo/db/catalog/document_validation.h"
#include "mongo/db/client.h"
#include "mongo/db/jsobj.h"
#include "mongo/db/namespace_string.h"
#include "mongo/db/pipeline/lite_parsed_pipeline.h"
#include "mongo/util/assert_util.h"
#include "mongo/util/str.h"

namespace mongo {

AuthorizationSession::~AuthorizationSession() = default;

void AuthorizationSession::ScopedImpersonate::swap() {
    using std::swap;
    auto impersonations = _authSession._getImpersonations();
    swap(*std::get<0>(impersonations), _user);
    swap(*std::get<1>(impersonations), _roles);
}

std::unique_ptr<AuthorizationSession> AuthorizationSession::create(
    AuthorizationManager* authzManager) {
    static auto w = MONGO_WEAK_FUNCTION_DEFINITION(AuthorizationSession::create);
    return w(authzManager);
}

}  // namespace mongo

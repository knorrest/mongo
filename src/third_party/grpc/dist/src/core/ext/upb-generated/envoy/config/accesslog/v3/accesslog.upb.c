/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/accesslog/v3/accesslog.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/config/accesslog/v3/accesslog.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/route/v3/route_components.upb.h"
#include "envoy/type/matcher/v3/metadata.upb.h"
#include "envoy/type/v3/percent.upb.h"
#include "google/protobuf/any.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_config_accesslog_v3_AccessLog_submsgs[2] = {
  &envoy_config_accesslog_v3_AccessLogFilter_msginit,
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_accesslog_v3_AccessLog__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(12, 24), 1, 0, 11, 1},
  {4, UPB_SIZE(16, 32), UPB_SIZE(-21, -41), 1, 11, 1},
};

const upb_msglayout envoy_config_accesslog_v3_AccessLog_msginit = {
  &envoy_config_accesslog_v3_AccessLog_submsgs[0],
  &envoy_config_accesslog_v3_AccessLog__fields[0],
  UPB_SIZE(24, 48), 3, false, 255,
};

static const upb_msglayout *const envoy_config_accesslog_v3_AccessLogFilter_submsgs[12] = {
  &envoy_config_accesslog_v3_AndFilter_msginit,
  &envoy_config_accesslog_v3_DurationFilter_msginit,
  &envoy_config_accesslog_v3_ExtensionFilter_msginit,
  &envoy_config_accesslog_v3_GrpcStatusFilter_msginit,
  &envoy_config_accesslog_v3_HeaderFilter_msginit,
  &envoy_config_accesslog_v3_MetadataFilter_msginit,
  &envoy_config_accesslog_v3_NotHealthCheckFilter_msginit,
  &envoy_config_accesslog_v3_OrFilter_msginit,
  &envoy_config_accesslog_v3_ResponseFlagFilter_msginit,
  &envoy_config_accesslog_v3_RuntimeFilter_msginit,
  &envoy_config_accesslog_v3_StatusCodeFilter_msginit,
  &envoy_config_accesslog_v3_TraceableFilter_msginit,
};

static const upb_msglayout_field envoy_config_accesslog_v3_AccessLogFilter__fields[12] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 10, 11, 1},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, 1},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 6, 11, 1},
  {4, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 11, 11, 1},
  {5, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 9, 11, 1},
  {6, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, 1},
  {7, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 7, 11, 1},
  {8, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 4, 11, 1},
  {9, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 8, 11, 1},
  {10, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 3, 11, 1},
  {11, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 2, 11, 1},
  {12, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 5, 11, 1},
};

const upb_msglayout envoy_config_accesslog_v3_AccessLogFilter_msginit = {
  &envoy_config_accesslog_v3_AccessLogFilter_submsgs[0],
  &envoy_config_accesslog_v3_AccessLogFilter__fields[0],
  UPB_SIZE(8, 16), 12, false, 255,
};

static const upb_msglayout *const envoy_config_accesslog_v3_ComparisonFilter_submsgs[1] = {
  &envoy_config_core_v3_RuntimeUInt32_msginit,
};

static const upb_msglayout_field envoy_config_accesslog_v3_ComparisonFilter__fields[2] = {
  {1, UPB_SIZE(4, 4), 0, 0, 14, 1},
  {2, UPB_SIZE(8, 8), 1, 0, 11, 1},
};

const upb_msglayout envoy_config_accesslog_v3_ComparisonFilter_msginit = {
  &envoy_config_accesslog_v3_ComparisonFilter_submsgs[0],
  &envoy_config_accesslog_v3_ComparisonFilter__fields[0],
  UPB_SIZE(16, 16), 2, false, 255,
};

static const upb_msglayout *const envoy_config_accesslog_v3_StatusCodeFilter_submsgs[1] = {
  &envoy_config_accesslog_v3_ComparisonFilter_msginit,
};

static const upb_msglayout_field envoy_config_accesslog_v3_StatusCodeFilter__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, 1},
};

const upb_msglayout envoy_config_accesslog_v3_StatusCodeFilter_msginit = {
  &envoy_config_accesslog_v3_StatusCodeFilter_submsgs[0],
  &envoy_config_accesslog_v3_StatusCodeFilter__fields[0],
  UPB_SIZE(8, 16), 1, false, 255,
};

static const upb_msglayout *const envoy_config_accesslog_v3_DurationFilter_submsgs[1] = {
  &envoy_config_accesslog_v3_ComparisonFilter_msginit,
};

static const upb_msglayout_field envoy_config_accesslog_v3_DurationFilter__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, 1},
};

const upb_msglayout envoy_config_accesslog_v3_DurationFilter_msginit = {
  &envoy_config_accesslog_v3_DurationFilter_submsgs[0],
  &envoy_config_accesslog_v3_DurationFilter__fields[0],
  UPB_SIZE(8, 16), 1, false, 255,
};

const upb_msglayout envoy_config_accesslog_v3_NotHealthCheckFilter_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false, 255,
};

const upb_msglayout envoy_config_accesslog_v3_TraceableFilter_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false, 255,
};

static const upb_msglayout *const envoy_config_accesslog_v3_RuntimeFilter_submsgs[1] = {
  &envoy_type_v3_FractionalPercent_msginit,
};

static const upb_msglayout_field envoy_config_accesslog_v3_RuntimeFilter__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(12, 24), 1, 0, 11, 1},
  {3, UPB_SIZE(1, 1), 0, 0, 8, 1},
};

const upb_msglayout envoy_config_accesslog_v3_RuntimeFilter_msginit = {
  &envoy_config_accesslog_v3_RuntimeFilter_submsgs[0],
  &envoy_config_accesslog_v3_RuntimeFilter__fields[0],
  UPB_SIZE(16, 32), 3, false, 255,
};

static const upb_msglayout *const envoy_config_accesslog_v3_AndFilter_submsgs[1] = {
  &envoy_config_accesslog_v3_AccessLogFilter_msginit,
};

static const upb_msglayout_field envoy_config_accesslog_v3_AndFilter__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 3},
};

const upb_msglayout envoy_config_accesslog_v3_AndFilter_msginit = {
  &envoy_config_accesslog_v3_AndFilter_submsgs[0],
  &envoy_config_accesslog_v3_AndFilter__fields[0],
  UPB_SIZE(8, 8), 1, false, 255,
};

static const upb_msglayout *const envoy_config_accesslog_v3_OrFilter_submsgs[1] = {
  &envoy_config_accesslog_v3_AccessLogFilter_msginit,
};

static const upb_msglayout_field envoy_config_accesslog_v3_OrFilter__fields[1] = {
  {2, UPB_SIZE(0, 0), 0, 0, 11, 3},
};

const upb_msglayout envoy_config_accesslog_v3_OrFilter_msginit = {
  &envoy_config_accesslog_v3_OrFilter_submsgs[0],
  &envoy_config_accesslog_v3_OrFilter__fields[0],
  UPB_SIZE(8, 8), 1, false, 255,
};

static const upb_msglayout *const envoy_config_accesslog_v3_HeaderFilter_submsgs[1] = {
  &envoy_config_route_v3_HeaderMatcher_msginit,
};

static const upb_msglayout_field envoy_config_accesslog_v3_HeaderFilter__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, 1},
};

const upb_msglayout envoy_config_accesslog_v3_HeaderFilter_msginit = {
  &envoy_config_accesslog_v3_HeaderFilter_submsgs[0],
  &envoy_config_accesslog_v3_HeaderFilter__fields[0],
  UPB_SIZE(8, 16), 1, false, 255,
};

static const upb_msglayout_field envoy_config_accesslog_v3_ResponseFlagFilter__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 3},
};

const upb_msglayout envoy_config_accesslog_v3_ResponseFlagFilter_msginit = {
  NULL,
  &envoy_config_accesslog_v3_ResponseFlagFilter__fields[0],
  UPB_SIZE(8, 8), 1, false, 255,
};

static const upb_msglayout_field envoy_config_accesslog_v3_GrpcStatusFilter__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 14, _UPB_LABEL_PACKED},
  {2, UPB_SIZE(0, 0), 0, 0, 8, 1},
};

const upb_msglayout envoy_config_accesslog_v3_GrpcStatusFilter_msginit = {
  NULL,
  &envoy_config_accesslog_v3_GrpcStatusFilter__fields[0],
  UPB_SIZE(8, 16), 2, false, 255,
};

static const upb_msglayout *const envoy_config_accesslog_v3_MetadataFilter_submsgs[2] = {
  &envoy_type_matcher_v3_MetadataMatcher_msginit,
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_config_accesslog_v3_MetadataFilter__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, 1},
  {2, UPB_SIZE(8, 16), 2, 1, 11, 1},
};

const upb_msglayout envoy_config_accesslog_v3_MetadataFilter_msginit = {
  &envoy_config_accesslog_v3_MetadataFilter_submsgs[0],
  &envoy_config_accesslog_v3_MetadataFilter__fields[0],
  UPB_SIZE(16, 24), 2, false, 255,
};

static const upb_msglayout *const envoy_config_accesslog_v3_ExtensionFilter_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_accesslog_v3_ExtensionFilter__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {3, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, 1},
};

const upb_msglayout envoy_config_accesslog_v3_ExtensionFilter_msginit = {
  &envoy_config_accesslog_v3_ExtensionFilter_submsgs[0],
  &envoy_config_accesslog_v3_ExtensionFilter__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

#include "upb/port_undef.inc"


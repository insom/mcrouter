/*
 *  Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#include "HelloGoodbyeRouterInfo.h"

#include <unordered_map>

#include <folly/Range.h>
#include <folly/dynamic.h>

#include <mcrouter/routes/ExtraRouteHandleProviderIf.h>
#include <mcrouter/routes/McRouteHandleProvider.h>

#include <mcrouter/lib/routes/NullRoute.h>
#include <mcrouter/routes/AllAsyncRouteFactory.h>
#include <mcrouter/routes/AllFastestRouteFactory.h>
#include <mcrouter/routes/AllInitialRouteFactory.h>
#include <mcrouter/routes/AllMajorityRouteFactory.h>
#include <mcrouter/routes/AllSyncRouteFactory.h>
#include <mcrouter/routes/BlackholeRoute.h>
#include <mcrouter/routes/DevNullRoute.h>
#include <mcrouter/routes/ErrorRoute.h>
#include <mcrouter/routes/FailoverRoute.h>
#include <mcrouter/routes/HashRouteFactory.h>
#include <mcrouter/routes/HostIdRouteFactory.h>
#include <mcrouter/routes/LatencyInjectionRoute.h>
#include <mcrouter/routes/LatestRoute.h>
#include <mcrouter/routes/LoadBalancerRoute.h>
#include <mcrouter/routes/LoggingRoute.h>
#include <mcrouter/routes/MigrateRouteFactory.h>
#include <mcrouter/routes/MissFailoverRoute.h>
#include <mcrouter/routes/ModifyKeyRoute.h>
#include <mcrouter/routes/OperationSelectorRoute.h>
#include <mcrouter/routes/OutstandingLimitRoute.h>
#include <mcrouter/routes/RandomRouteFactory.h>

#include <mcrouter/routes/McExtraRouteHandleProvider.h>

#include "mcrouter/lib/carbon/example/DuplicateRoute.h"
#include "mcrouter/lib/carbon/example/CarbonLookasideRoute.h"

using namespace facebook::memcache;
using namespace facebook::memcache::mcrouter;

namespace facebook {
namespace memcache {
namespace mcrouter {

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeAllAsyncRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeAllFastestRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeAllInitialRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeAllMajorityRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeAllSyncRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeBlackholeRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeDevNullRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeErrorRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeHashRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeHostIdRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeLatencyInjectionRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeLatestRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeLoadBalancerRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeLoggingRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeMigrateRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeMissFailoverRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeModifyKeyRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeOperationSelectorRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template hellogoodbye::HelloGoodbyeRouterInfo::RouteHandlePtr
makeRandomRoute<hellogoodbye::HelloGoodbyeRouterInfo>(
RouteHandleFactory<hellogoodbye::HelloGoodbyeRouterInfo::RouteHandleIf>& factory,
const folly::dynamic& json);

extern template class ExtraRouteHandleProviderIf<hellogoodbye::HelloGoodbyeRouterInfo>;

} // namespace mcrouter
} // namespace memcache
} // namespace facebook

namespace hellogoodbye {

constexpr const char* HelloGoodbyeRouterInfo::name;

/* static */ HelloGoodbyeRouterInfo::RouteHandleFactoryMap
HelloGoodbyeRouterInfo::buildRouteMap() {
  RouteHandleFactoryMap map{
      {"AllAsyncRoute", &makeAllAsyncRoute<HelloGoodbyeRouterInfo>},
      {"AllFastestRoute", &makeAllFastestRoute<HelloGoodbyeRouterInfo>},
      {"AllInitialRoute", &makeAllInitialRoute<HelloGoodbyeRouterInfo>},
      {"AllMajorityRoute", &makeAllMajorityRoute<HelloGoodbyeRouterInfo>},
      {"AllSyncRoute", &makeAllSyncRoute<HelloGoodbyeRouterInfo>},
      {"BlackholeRoute", &makeBlackholeRoute<HelloGoodbyeRouterInfo>},
      {"DevNullRoute", &makeDevNullRoute<HelloGoodbyeRouterInfo>},
      {"ErrorRoute", &makeErrorRoute<HelloGoodbyeRouterInfo>},
      {"HashRoute",
       [](RouteHandleFactory<RouteHandleIf>& factory,
          const folly::dynamic& json) {
         return makeHashRoute<HelloGoodbyeRouterInfo>(factory, json);
       }},
      {"HostIdRoute", &makeHostIdRoute<HelloGoodbyeRouterInfo>},
      {"LatencyInjectionRoute",
       &makeLatencyInjectionRoute<HelloGoodbyeRouterInfo>},
      {"LatestRoute", &makeLatestRoute<HelloGoodbyeRouterInfo>},
      {"LoadBalancerRoute", &makeLoadBalancerRoute<HelloGoodbyeRouterInfo>},
      {"LoggingRoute", &makeLoggingRoute<HelloGoodbyeRouterInfo>},
      {"MigrateRoute", &makeMigrateRoute<HelloGoodbyeRouterInfo>},
      {"MissFailoverRoute", &makeMissFailoverRoute<HelloGoodbyeRouterInfo>},
      {"ModifyKeyRoute", &makeModifyKeyRoute<HelloGoodbyeRouterInfo>},
      {"NullRoute", &makeNullRoute<HelloGoodbyeRouteHandleIf>},
      {"OperationSelectorRoute",
       &makeOperationSelectorRoute<HelloGoodbyeRouterInfo>},
      {"RandomRoute", &makeRandomRoute<HelloGoodbyeRouterInfo>},
      {"DuplicateRoute", &makeDuplicateRoute<HelloGoodbyeRouterInfo>},
      {"CarbonLookasideRoute", &makeCarbonLookasideRoute<HelloGoodbyeRouterInfo>},
  };
  return map;
}

/* static */ HelloGoodbyeRouterInfo::RouteHandleFactoryMapWithProxy
HelloGoodbyeRouterInfo::buildRouteMapWithProxy() {
  return RouteHandleFactoryMapWithProxy();
}

/* static */ HelloGoodbyeRouterInfo::RouteHandleFactoryMapForWrapper
HelloGoodbyeRouterInfo::buildRouteMapForWrapper() {
  return RouteHandleFactoryMapForWrapper();
}
} // namespace hellogoodbye

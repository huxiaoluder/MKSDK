#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
#import "EventRuleAdd.pbobjc.h"
#endif

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import <ProtoRPC/ProtoService.h>
#import <ProtoRPC/ProtoRPC.h>
#import <RxLibrary/GRXWriteable.h>
#import <RxLibrary/GRXWriter.h>
#endif

#if defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) && GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
  @class EventRuleAddRpcRequest;
  @class EventRuleAddRpcResponse;
#else
  #import "IotComm.pbobjc.h"
#endif

@class GRPCProtoCall;


NS_ASSUME_NONNULL_BEGIN

@protocol EventRuleAddRpcYCall <NSObject>

#pragma mark YCall(RpcRequest) returns (RpcResponse)

/**
 * rpc Add (stream RpcRequest) returns (stream RpcResponse) {}
 */
- (void)yCallWithRequest:(EventRuleAddRpcRequest *)request handler:(void(^)(EventRuleAddRpcResponse *_Nullable response, NSError *_Nullable error))handler;

/**
 * rpc Add (stream RpcRequest) returns (stream RpcResponse) {}
 */
- (GRPCProtoCall *)RPCToYCallWithRequest:(EventRuleAddRpcRequest *)request handler:(void(^)(EventRuleAddRpcResponse *_Nullable response, NSError *_Nullable error))handler;


@end


#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
/**
 * Basic service implementation, over gRPC, that only does
 * marshalling and parsing.
 */
@interface EventRuleAddRpcYCall : GRPCProtoService<EventRuleAddRpcYCall>
- (instancetype)initWithHost:(NSString *)host NS_DESIGNATED_INITIALIZER;
+ (instancetype)serviceWithHost:(NSString *)host;
@end
#endif

NS_ASSUME_NONNULL_END


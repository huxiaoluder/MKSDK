#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
#import "M2HgetPlatStatus.pbobjc.h"
#endif

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import <ProtoRPC/ProtoService.h>
#import <ProtoRPC/ProtoRPC.h>
#import <RxLibrary/GRXWriteable.h>
#import <RxLibrary/GRXWriter.h>
#endif

#if defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) && GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
  @class M2HGetPlatStatusRpcRequest;
  @class M2HGetPlatStatusRpcResponse;
#else
#endif

@class GRPCProtoCall;


NS_ASSUME_NONNULL_BEGIN

@protocol M2HGetPlatStatusRpcYCall <NSObject>

#pragma mark YCall(RpcRequest) returns (RpcResponse)

/**
 * rpc Add (stream RpcRequest) returns (stream RpcResponse) {}
 */
- (void)yCallWithRequest:(M2HGetPlatStatusRpcRequest *)request handler:(void(^)(M2HGetPlatStatusRpcResponse *_Nullable response, NSError *_Nullable error))handler;

/**
 * rpc Add (stream RpcRequest) returns (stream RpcResponse) {}
 */
- (GRPCProtoCall *)RPCToYCallWithRequest:(M2HGetPlatStatusRpcRequest *)request handler:(void(^)(M2HGetPlatStatusRpcResponse *_Nullable response, NSError *_Nullable error))handler;


@end


#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
/**
 * Basic service implementation, over gRPC, that only does
 * marshalling and parsing.
 */
@interface M2HGetPlatStatusRpcYCall : GRPCProtoService<M2HGetPlatStatusRpcYCall>
- (instancetype)initWithHost:(NSString *)host NS_DESIGNATED_INITIALIZER;
+ (instancetype)serviceWithHost:(NSString *)host;
@end
#endif

NS_ASSUME_NONNULL_END


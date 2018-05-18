#if !defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) || !GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
#import "HouseDefenseModeGet.pbobjc.h"
#endif

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import <ProtoRPC/ProtoService.h>
#import <ProtoRPC/ProtoRPC.h>
#import <RxLibrary/GRXWriteable.h>
#import <RxLibrary/GRXWriter.h>
#endif

#if defined(GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO) && GPB_GRPC_FORWARD_DECLARE_MESSAGE_PROTO
  @class HouseDefenseModeGetRpcRequest;
  @class HouseDefenseModeGetRpcResponse;
#else
#endif

@class GRPCProtoCall;


NS_ASSUME_NONNULL_BEGIN

@protocol HouseDefenseModeGetRpcYCall <NSObject>

#pragma mark YCall(RpcRequest) returns (RpcResponse)

/**
 * rpc Add (stream RpcRequest) returns (stream RpcResponse) {}
 */
- (void)yCallWithRequest:(HouseDefenseModeGetRpcRequest *)request handler:(void(^)(HouseDefenseModeGetRpcResponse *_Nullable response, NSError *_Nullable error))handler;

/**
 * rpc Add (stream RpcRequest) returns (stream RpcResponse) {}
 */
- (GRPCProtoCall *)RPCToYCallWithRequest:(HouseDefenseModeGetRpcRequest *)request handler:(void(^)(HouseDefenseModeGetRpcResponse *_Nullable response, NSError *_Nullable error))handler;


@end


#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
/**
 * Basic service implementation, over gRPC, that only does
 * marshalling and parsing.
 */
@interface HouseDefenseModeGetRpcYCall : GRPCProtoService<HouseDefenseModeGetRpcYCall>
- (instancetype)initWithHost:(NSString *)host NS_DESIGNATED_INITIALIZER;
+ (instancetype)serviceWithHost:(NSString *)host;
@end
#endif

NS_ASSUME_NONNULL_END


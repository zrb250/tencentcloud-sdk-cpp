/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/gse/v20191112/GseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gse::V20191112;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-11-12";
    const string ENDPOINT = "gse.tencentcloudapi.com";
}

GseClient::GseClient(const Credential &credential, const string &region) :
    GseClient(credential, region, ClientProfile())
{
}

GseClient::GseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GseClient::AttachCcnInstancesOutcome GseClient::AttachCcnInstances(const AttachCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AttachCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachCcnInstancesResponse rsp = AttachCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachCcnInstancesOutcome(rsp);
        else
            return AttachCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return AttachCcnInstancesOutcome(outcome.GetError());
    }
}

void GseClient::AttachCcnInstancesAsync(const AttachCcnInstancesRequest& request, const AttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachCcnInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::AttachCcnInstancesOutcomeCallable GseClient::AttachCcnInstancesCallable(const AttachCcnInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachCcnInstancesOutcome()>>(
        [this, request]()
        {
            return this->AttachCcnInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::CreateAliasOutcome GseClient::CreateAlias(const CreateAliasRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAliasResponse rsp = CreateAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAliasOutcome(rsp);
        else
            return CreateAliasOutcome(o.GetError());
    }
    else
    {
        return CreateAliasOutcome(outcome.GetError());
    }
}

void GseClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::CreateAliasOutcomeCallable GseClient::CreateAliasCallable(const CreateAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAliasOutcome()>>(
        [this, request]()
        {
            return this->CreateAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::CreateAssetOutcome GseClient::CreateAsset(const CreateAssetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssetResponse rsp = CreateAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssetOutcome(rsp);
        else
            return CreateAssetOutcome(o.GetError());
    }
    else
    {
        return CreateAssetOutcome(outcome.GetError());
    }
}

void GseClient::CreateAssetAsync(const CreateAssetRequest& request, const CreateAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::CreateAssetOutcomeCallable GseClient::CreateAssetCallable(const CreateAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAssetOutcome()>>(
        [this, request]()
        {
            return this->CreateAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::CreateGameServerSessionOutcome GseClient::CreateGameServerSession(const CreateGameServerSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGameServerSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGameServerSessionResponse rsp = CreateGameServerSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGameServerSessionOutcome(rsp);
        else
            return CreateGameServerSessionOutcome(o.GetError());
    }
    else
    {
        return CreateGameServerSessionOutcome(outcome.GetError());
    }
}

void GseClient::CreateGameServerSessionAsync(const CreateGameServerSessionRequest& request, const CreateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGameServerSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::CreateGameServerSessionOutcomeCallable GseClient::CreateGameServerSessionCallable(const CreateGameServerSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGameServerSessionOutcome()>>(
        [this, request]()
        {
            return this->CreateGameServerSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DeleteAliasOutcome GseClient::DeleteAlias(const DeleteAliasRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAliasResponse rsp = DeleteAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAliasOutcome(rsp);
        else
            return DeleteAliasOutcome(o.GetError());
    }
    else
    {
        return DeleteAliasOutcome(outcome.GetError());
    }
}

void GseClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DeleteAliasOutcomeCallable GseClient::DeleteAliasCallable(const DeleteAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAliasOutcome()>>(
        [this, request]()
        {
            return this->DeleteAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DeleteAssetOutcome GseClient::DeleteAsset(const DeleteAssetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAssetResponse rsp = DeleteAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAssetOutcome(rsp);
        else
            return DeleteAssetOutcome(o.GetError());
    }
    else
    {
        return DeleteAssetOutcome(outcome.GetError());
    }
}

void GseClient::DeleteAssetAsync(const DeleteAssetRequest& request, const DeleteAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DeleteAssetOutcomeCallable GseClient::DeleteAssetCallable(const DeleteAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAssetOutcome()>>(
        [this, request]()
        {
            return this->DeleteAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DeleteFleetOutcome GseClient::DeleteFleet(const DeleteFleetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFleet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFleetResponse rsp = DeleteFleetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFleetOutcome(rsp);
        else
            return DeleteFleetOutcome(o.GetError());
    }
    else
    {
        return DeleteFleetOutcome(outcome.GetError());
    }
}

void GseClient::DeleteFleetAsync(const DeleteFleetRequest& request, const DeleteFleetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFleet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DeleteFleetOutcomeCallable GseClient::DeleteFleetCallable(const DeleteFleetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFleetOutcome()>>(
        [this, request]()
        {
            return this->DeleteFleet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DeleteScalingPolicyOutcome GseClient::DeleteScalingPolicy(const DeleteScalingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScalingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScalingPolicyResponse rsp = DeleteScalingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScalingPolicyOutcome(rsp);
        else
            return DeleteScalingPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteScalingPolicyOutcome(outcome.GetError());
    }
}

void GseClient::DeleteScalingPolicyAsync(const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScalingPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DeleteScalingPolicyOutcomeCallable GseClient::DeleteScalingPolicyCallable(const DeleteScalingPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScalingPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteScalingPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeAliasOutcome GseClient::DescribeAlias(const DescribeAliasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAliasResponse rsp = DescribeAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAliasOutcome(rsp);
        else
            return DescribeAliasOutcome(o.GetError());
    }
    else
    {
        return DescribeAliasOutcome(outcome.GetError());
    }
}

void GseClient::DescribeAliasAsync(const DescribeAliasRequest& request, const DescribeAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeAliasOutcomeCallable GseClient::DescribeAliasCallable(const DescribeAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAliasOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeAssetOutcome GseClient::DescribeAsset(const DescribeAssetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetResponse rsp = DescribeAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetOutcome(rsp);
        else
            return DescribeAssetOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetOutcome(outcome.GetError());
    }
}

void GseClient::DescribeAssetAsync(const DescribeAssetRequest& request, const DescribeAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeAssetOutcomeCallable GseClient::DescribeAssetCallable(const DescribeAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeAssetsOutcome GseClient::DescribeAssets(const DescribeAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetsResponse rsp = DescribeAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetsOutcome(rsp);
        else
            return DescribeAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetsOutcome(outcome.GetError());
    }
}

void GseClient::DescribeAssetsAsync(const DescribeAssetsRequest& request, const DescribeAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeAssetsOutcomeCallable GseClient::DescribeAssetsCallable(const DescribeAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeCcnInstancesOutcome GseClient::DescribeCcnInstances(const DescribeCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcnInstancesResponse rsp = DescribeCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcnInstancesOutcome(rsp);
        else
            return DescribeCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeCcnInstancesOutcome(outcome.GetError());
    }
}

void GseClient::DescribeCcnInstancesAsync(const DescribeCcnInstancesRequest& request, const DescribeCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCcnInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeCcnInstancesOutcomeCallable GseClient::DescribeCcnInstancesCallable(const DescribeCcnInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCcnInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCcnInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeFleetAttributesOutcome GseClient::DescribeFleetAttributes(const DescribeFleetAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFleetAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFleetAttributesResponse rsp = DescribeFleetAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFleetAttributesOutcome(rsp);
        else
            return DescribeFleetAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeFleetAttributesOutcome(outcome.GetError());
    }
}

void GseClient::DescribeFleetAttributesAsync(const DescribeFleetAttributesRequest& request, const DescribeFleetAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFleetAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeFleetAttributesOutcomeCallable GseClient::DescribeFleetAttributesCallable(const DescribeFleetAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFleetAttributesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFleetAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeFleetEventsOutcome GseClient::DescribeFleetEvents(const DescribeFleetEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFleetEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFleetEventsResponse rsp = DescribeFleetEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFleetEventsOutcome(rsp);
        else
            return DescribeFleetEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeFleetEventsOutcome(outcome.GetError());
    }
}

void GseClient::DescribeFleetEventsAsync(const DescribeFleetEventsRequest& request, const DescribeFleetEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFleetEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeFleetEventsOutcomeCallable GseClient::DescribeFleetEventsCallable(const DescribeFleetEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFleetEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFleetEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeFleetPortSettingsOutcome GseClient::DescribeFleetPortSettings(const DescribeFleetPortSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFleetPortSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFleetPortSettingsResponse rsp = DescribeFleetPortSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFleetPortSettingsOutcome(rsp);
        else
            return DescribeFleetPortSettingsOutcome(o.GetError());
    }
    else
    {
        return DescribeFleetPortSettingsOutcome(outcome.GetError());
    }
}

void GseClient::DescribeFleetPortSettingsAsync(const DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFleetPortSettings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeFleetPortSettingsOutcomeCallable GseClient::DescribeFleetPortSettingsCallable(const DescribeFleetPortSettingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFleetPortSettingsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFleetPortSettings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeFleetUtilizationOutcome GseClient::DescribeFleetUtilization(const DescribeFleetUtilizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFleetUtilization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFleetUtilizationResponse rsp = DescribeFleetUtilizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFleetUtilizationOutcome(rsp);
        else
            return DescribeFleetUtilizationOutcome(o.GetError());
    }
    else
    {
        return DescribeFleetUtilizationOutcome(outcome.GetError());
    }
}

void GseClient::DescribeFleetUtilizationAsync(const DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFleetUtilization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeFleetUtilizationOutcomeCallable GseClient::DescribeFleetUtilizationCallable(const DescribeFleetUtilizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFleetUtilizationOutcome()>>(
        [this, request]()
        {
            return this->DescribeFleetUtilization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeGameServerSessionDetailsOutcome GseClient::DescribeGameServerSessionDetails(const DescribeGameServerSessionDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGameServerSessionDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGameServerSessionDetailsResponse rsp = DescribeGameServerSessionDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGameServerSessionDetailsOutcome(rsp);
        else
            return DescribeGameServerSessionDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeGameServerSessionDetailsOutcome(outcome.GetError());
    }
}

void GseClient::DescribeGameServerSessionDetailsAsync(const DescribeGameServerSessionDetailsRequest& request, const DescribeGameServerSessionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGameServerSessionDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeGameServerSessionDetailsOutcomeCallable GseClient::DescribeGameServerSessionDetailsCallable(const DescribeGameServerSessionDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGameServerSessionDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGameServerSessionDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeGameServerSessionPlacementOutcome GseClient::DescribeGameServerSessionPlacement(const DescribeGameServerSessionPlacementRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGameServerSessionPlacement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGameServerSessionPlacementResponse rsp = DescribeGameServerSessionPlacementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGameServerSessionPlacementOutcome(rsp);
        else
            return DescribeGameServerSessionPlacementOutcome(o.GetError());
    }
    else
    {
        return DescribeGameServerSessionPlacementOutcome(outcome.GetError());
    }
}

void GseClient::DescribeGameServerSessionPlacementAsync(const DescribeGameServerSessionPlacementRequest& request, const DescribeGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGameServerSessionPlacement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeGameServerSessionPlacementOutcomeCallable GseClient::DescribeGameServerSessionPlacementCallable(const DescribeGameServerSessionPlacementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGameServerSessionPlacementOutcome()>>(
        [this, request]()
        {
            return this->DescribeGameServerSessionPlacement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeGameServerSessionQueuesOutcome GseClient::DescribeGameServerSessionQueues(const DescribeGameServerSessionQueuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGameServerSessionQueues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGameServerSessionQueuesResponse rsp = DescribeGameServerSessionQueuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGameServerSessionQueuesOutcome(rsp);
        else
            return DescribeGameServerSessionQueuesOutcome(o.GetError());
    }
    else
    {
        return DescribeGameServerSessionQueuesOutcome(outcome.GetError());
    }
}

void GseClient::DescribeGameServerSessionQueuesAsync(const DescribeGameServerSessionQueuesRequest& request, const DescribeGameServerSessionQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGameServerSessionQueues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeGameServerSessionQueuesOutcomeCallable GseClient::DescribeGameServerSessionQueuesCallable(const DescribeGameServerSessionQueuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGameServerSessionQueuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeGameServerSessionQueues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeGameServerSessionsOutcome GseClient::DescribeGameServerSessions(const DescribeGameServerSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGameServerSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGameServerSessionsResponse rsp = DescribeGameServerSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGameServerSessionsOutcome(rsp);
        else
            return DescribeGameServerSessionsOutcome(o.GetError());
    }
    else
    {
        return DescribeGameServerSessionsOutcome(outcome.GetError());
    }
}

void GseClient::DescribeGameServerSessionsAsync(const DescribeGameServerSessionsRequest& request, const DescribeGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGameServerSessions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeGameServerSessionsOutcomeCallable GseClient::DescribeGameServerSessionsCallable(const DescribeGameServerSessionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGameServerSessionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGameServerSessions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeInstanceTypesOutcome GseClient::DescribeInstanceTypes(const DescribeInstanceTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTypesResponse rsp = DescribeInstanceTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTypesOutcome(rsp);
        else
            return DescribeInstanceTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTypesOutcome(outcome.GetError());
    }
}

void GseClient::DescribeInstanceTypesAsync(const DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeInstanceTypesOutcomeCallable GseClient::DescribeInstanceTypesCallable(const DescribeInstanceTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeInstancesOutcome GseClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void GseClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeInstancesOutcomeCallable GseClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribePlayerSessionsOutcome GseClient::DescribePlayerSessions(const DescribePlayerSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlayerSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlayerSessionsResponse rsp = DescribePlayerSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlayerSessionsOutcome(rsp);
        else
            return DescribePlayerSessionsOutcome(o.GetError());
    }
    else
    {
        return DescribePlayerSessionsOutcome(outcome.GetError());
    }
}

void GseClient::DescribePlayerSessionsAsync(const DescribePlayerSessionsRequest& request, const DescribePlayerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePlayerSessions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribePlayerSessionsOutcomeCallable GseClient::DescribePlayerSessionsCallable(const DescribePlayerSessionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePlayerSessionsOutcome()>>(
        [this, request]()
        {
            return this->DescribePlayerSessions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeRuntimeConfigurationOutcome GseClient::DescribeRuntimeConfiguration(const DescribeRuntimeConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuntimeConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuntimeConfigurationResponse rsp = DescribeRuntimeConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuntimeConfigurationOutcome(rsp);
        else
            return DescribeRuntimeConfigurationOutcome(o.GetError());
    }
    else
    {
        return DescribeRuntimeConfigurationOutcome(outcome.GetError());
    }
}

void GseClient::DescribeRuntimeConfigurationAsync(const DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuntimeConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeRuntimeConfigurationOutcomeCallable GseClient::DescribeRuntimeConfigurationCallable(const DescribeRuntimeConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuntimeConfigurationOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuntimeConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeScalingPoliciesOutcome GseClient::DescribeScalingPolicies(const DescribeScalingPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScalingPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScalingPoliciesResponse rsp = DescribeScalingPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScalingPoliciesOutcome(rsp);
        else
            return DescribeScalingPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeScalingPoliciesOutcome(outcome.GetError());
    }
}

void GseClient::DescribeScalingPoliciesAsync(const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScalingPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeScalingPoliciesOutcomeCallable GseClient::DescribeScalingPoliciesCallable(const DescribeScalingPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScalingPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeScalingPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeUserQuotaOutcome GseClient::DescribeUserQuota(const DescribeUserQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserQuotaResponse rsp = DescribeUserQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserQuotaOutcome(rsp);
        else
            return DescribeUserQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeUserQuotaOutcome(outcome.GetError());
    }
}

void GseClient::DescribeUserQuotaAsync(const DescribeUserQuotaRequest& request, const DescribeUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeUserQuotaOutcomeCallable GseClient::DescribeUserQuotaCallable(const DescribeUserQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DescribeUserQuotasOutcome GseClient::DescribeUserQuotas(const DescribeUserQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserQuotasResponse rsp = DescribeUserQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserQuotasOutcome(rsp);
        else
            return DescribeUserQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribeUserQuotasOutcome(outcome.GetError());
    }
}

void GseClient::DescribeUserQuotasAsync(const DescribeUserQuotasRequest& request, const DescribeUserQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserQuotas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DescribeUserQuotasOutcomeCallable GseClient::DescribeUserQuotasCallable(const DescribeUserQuotasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserQuotasOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserQuotas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::DetachCcnInstancesOutcome GseClient::DetachCcnInstances(const DetachCcnInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DetachCcnInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachCcnInstancesResponse rsp = DetachCcnInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachCcnInstancesOutcome(rsp);
        else
            return DetachCcnInstancesOutcome(o.GetError());
    }
    else
    {
        return DetachCcnInstancesOutcome(outcome.GetError());
    }
}

void GseClient::DetachCcnInstancesAsync(const DetachCcnInstancesRequest& request, const DetachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachCcnInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::DetachCcnInstancesOutcomeCallable GseClient::DetachCcnInstancesCallable(const DetachCcnInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachCcnInstancesOutcome()>>(
        [this, request]()
        {
            return this->DetachCcnInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::GetGameServerSessionLogUrlOutcome GseClient::GetGameServerSessionLogUrl(const GetGameServerSessionLogUrlRequest &request)
{
    auto outcome = MakeRequest(request, "GetGameServerSessionLogUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGameServerSessionLogUrlResponse rsp = GetGameServerSessionLogUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGameServerSessionLogUrlOutcome(rsp);
        else
            return GetGameServerSessionLogUrlOutcome(o.GetError());
    }
    else
    {
        return GetGameServerSessionLogUrlOutcome(outcome.GetError());
    }
}

void GseClient::GetGameServerSessionLogUrlAsync(const GetGameServerSessionLogUrlRequest& request, const GetGameServerSessionLogUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetGameServerSessionLogUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::GetGameServerSessionLogUrlOutcomeCallable GseClient::GetGameServerSessionLogUrlCallable(const GetGameServerSessionLogUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetGameServerSessionLogUrlOutcome()>>(
        [this, request]()
        {
            return this->GetGameServerSessionLogUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::GetInstanceAccessOutcome GseClient::GetInstanceAccess(const GetInstanceAccessRequest &request)
{
    auto outcome = MakeRequest(request, "GetInstanceAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetInstanceAccessResponse rsp = GetInstanceAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetInstanceAccessOutcome(rsp);
        else
            return GetInstanceAccessOutcome(o.GetError());
    }
    else
    {
        return GetInstanceAccessOutcome(outcome.GetError());
    }
}

void GseClient::GetInstanceAccessAsync(const GetInstanceAccessRequest& request, const GetInstanceAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetInstanceAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::GetInstanceAccessOutcomeCallable GseClient::GetInstanceAccessCallable(const GetInstanceAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetInstanceAccessOutcome()>>(
        [this, request]()
        {
            return this->GetInstanceAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::GetUploadCredentialsOutcome GseClient::GetUploadCredentials(const GetUploadCredentialsRequest &request)
{
    auto outcome = MakeRequest(request, "GetUploadCredentials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUploadCredentialsResponse rsp = GetUploadCredentialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUploadCredentialsOutcome(rsp);
        else
            return GetUploadCredentialsOutcome(o.GetError());
    }
    else
    {
        return GetUploadCredentialsOutcome(outcome.GetError());
    }
}

void GseClient::GetUploadCredentialsAsync(const GetUploadCredentialsRequest& request, const GetUploadCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetUploadCredentials(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::GetUploadCredentialsOutcomeCallable GseClient::GetUploadCredentialsCallable(const GetUploadCredentialsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetUploadCredentialsOutcome()>>(
        [this, request]()
        {
            return this->GetUploadCredentials(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::GetUploadFederationTokenOutcome GseClient::GetUploadFederationToken(const GetUploadFederationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetUploadFederationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUploadFederationTokenResponse rsp = GetUploadFederationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUploadFederationTokenOutcome(rsp);
        else
            return GetUploadFederationTokenOutcome(o.GetError());
    }
    else
    {
        return GetUploadFederationTokenOutcome(outcome.GetError());
    }
}

void GseClient::GetUploadFederationTokenAsync(const GetUploadFederationTokenRequest& request, const GetUploadFederationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetUploadFederationToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::GetUploadFederationTokenOutcomeCallable GseClient::GetUploadFederationTokenCallable(const GetUploadFederationTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetUploadFederationTokenOutcome()>>(
        [this, request]()
        {
            return this->GetUploadFederationToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::JoinGameServerSessionOutcome GseClient::JoinGameServerSession(const JoinGameServerSessionRequest &request)
{
    auto outcome = MakeRequest(request, "JoinGameServerSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        JoinGameServerSessionResponse rsp = JoinGameServerSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return JoinGameServerSessionOutcome(rsp);
        else
            return JoinGameServerSessionOutcome(o.GetError());
    }
    else
    {
        return JoinGameServerSessionOutcome(outcome.GetError());
    }
}

void GseClient::JoinGameServerSessionAsync(const JoinGameServerSessionRequest& request, const JoinGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->JoinGameServerSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::JoinGameServerSessionOutcomeCallable GseClient::JoinGameServerSessionCallable(const JoinGameServerSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<JoinGameServerSessionOutcome()>>(
        [this, request]()
        {
            return this->JoinGameServerSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::ListAliasesOutcome GseClient::ListAliases(const ListAliasesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAliases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAliasesResponse rsp = ListAliasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAliasesOutcome(rsp);
        else
            return ListAliasesOutcome(o.GetError());
    }
    else
    {
        return ListAliasesOutcome(outcome.GetError());
    }
}

void GseClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAliases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::ListAliasesOutcomeCallable GseClient::ListAliasesCallable(const ListAliasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAliasesOutcome()>>(
        [this, request]()
        {
            return this->ListAliases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::ListFleetsOutcome GseClient::ListFleets(const ListFleetsRequest &request)
{
    auto outcome = MakeRequest(request, "ListFleets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListFleetsResponse rsp = ListFleetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListFleetsOutcome(rsp);
        else
            return ListFleetsOutcome(o.GetError());
    }
    else
    {
        return ListFleetsOutcome(outcome.GetError());
    }
}

void GseClient::ListFleetsAsync(const ListFleetsRequest& request, const ListFleetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListFleets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::ListFleetsOutcomeCallable GseClient::ListFleetsCallable(const ListFleetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListFleetsOutcome()>>(
        [this, request]()
        {
            return this->ListFleets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::PutScalingPolicyOutcome GseClient::PutScalingPolicy(const PutScalingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "PutScalingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutScalingPolicyResponse rsp = PutScalingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutScalingPolicyOutcome(rsp);
        else
            return PutScalingPolicyOutcome(o.GetError());
    }
    else
    {
        return PutScalingPolicyOutcome(outcome.GetError());
    }
}

void GseClient::PutScalingPolicyAsync(const PutScalingPolicyRequest& request, const PutScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PutScalingPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::PutScalingPolicyOutcomeCallable GseClient::PutScalingPolicyCallable(const PutScalingPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PutScalingPolicyOutcome()>>(
        [this, request]()
        {
            return this->PutScalingPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::ResolveAliasOutcome GseClient::ResolveAlias(const ResolveAliasRequest &request)
{
    auto outcome = MakeRequest(request, "ResolveAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResolveAliasResponse rsp = ResolveAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResolveAliasOutcome(rsp);
        else
            return ResolveAliasOutcome(o.GetError());
    }
    else
    {
        return ResolveAliasOutcome(outcome.GetError());
    }
}

void GseClient::ResolveAliasAsync(const ResolveAliasRequest& request, const ResolveAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResolveAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::ResolveAliasOutcomeCallable GseClient::ResolveAliasCallable(const ResolveAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResolveAliasOutcome()>>(
        [this, request]()
        {
            return this->ResolveAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::SearchGameServerSessionsOutcome GseClient::SearchGameServerSessions(const SearchGameServerSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "SearchGameServerSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchGameServerSessionsResponse rsp = SearchGameServerSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchGameServerSessionsOutcome(rsp);
        else
            return SearchGameServerSessionsOutcome(o.GetError());
    }
    else
    {
        return SearchGameServerSessionsOutcome(outcome.GetError());
    }
}

void GseClient::SearchGameServerSessionsAsync(const SearchGameServerSessionsRequest& request, const SearchGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchGameServerSessions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::SearchGameServerSessionsOutcomeCallable GseClient::SearchGameServerSessionsCallable(const SearchGameServerSessionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchGameServerSessionsOutcome()>>(
        [this, request]()
        {
            return this->SearchGameServerSessions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::SetServerWeightOutcome GseClient::SetServerWeight(const SetServerWeightRequest &request)
{
    auto outcome = MakeRequest(request, "SetServerWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetServerWeightResponse rsp = SetServerWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetServerWeightOutcome(rsp);
        else
            return SetServerWeightOutcome(o.GetError());
    }
    else
    {
        return SetServerWeightOutcome(outcome.GetError());
    }
}

void GseClient::SetServerWeightAsync(const SetServerWeightRequest& request, const SetServerWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetServerWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::SetServerWeightOutcomeCallable GseClient::SetServerWeightCallable(const SetServerWeightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetServerWeightOutcome()>>(
        [this, request]()
        {
            return this->SetServerWeight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::StartFleetActionsOutcome GseClient::StartFleetActions(const StartFleetActionsRequest &request)
{
    auto outcome = MakeRequest(request, "StartFleetActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartFleetActionsResponse rsp = StartFleetActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartFleetActionsOutcome(rsp);
        else
            return StartFleetActionsOutcome(o.GetError());
    }
    else
    {
        return StartFleetActionsOutcome(outcome.GetError());
    }
}

void GseClient::StartFleetActionsAsync(const StartFleetActionsRequest& request, const StartFleetActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartFleetActions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::StartFleetActionsOutcomeCallable GseClient::StartFleetActionsCallable(const StartFleetActionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartFleetActionsOutcome()>>(
        [this, request]()
        {
            return this->StartFleetActions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::StartGameServerSessionPlacementOutcome GseClient::StartGameServerSessionPlacement(const StartGameServerSessionPlacementRequest &request)
{
    auto outcome = MakeRequest(request, "StartGameServerSessionPlacement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartGameServerSessionPlacementResponse rsp = StartGameServerSessionPlacementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartGameServerSessionPlacementOutcome(rsp);
        else
            return StartGameServerSessionPlacementOutcome(o.GetError());
    }
    else
    {
        return StartGameServerSessionPlacementOutcome(outcome.GetError());
    }
}

void GseClient::StartGameServerSessionPlacementAsync(const StartGameServerSessionPlacementRequest& request, const StartGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartGameServerSessionPlacement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::StartGameServerSessionPlacementOutcomeCallable GseClient::StartGameServerSessionPlacementCallable(const StartGameServerSessionPlacementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartGameServerSessionPlacementOutcome()>>(
        [this, request]()
        {
            return this->StartGameServerSessionPlacement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::StartMatchPlacementOutcome GseClient::StartMatchPlacement(const StartMatchPlacementRequest &request)
{
    auto outcome = MakeRequest(request, "StartMatchPlacement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMatchPlacementResponse rsp = StartMatchPlacementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMatchPlacementOutcome(rsp);
        else
            return StartMatchPlacementOutcome(o.GetError());
    }
    else
    {
        return StartMatchPlacementOutcome(outcome.GetError());
    }
}

void GseClient::StartMatchPlacementAsync(const StartMatchPlacementRequest& request, const StartMatchPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMatchPlacement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::StartMatchPlacementOutcomeCallable GseClient::StartMatchPlacementCallable(const StartMatchPlacementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMatchPlacementOutcome()>>(
        [this, request]()
        {
            return this->StartMatchPlacement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::StopFleetActionsOutcome GseClient::StopFleetActions(const StopFleetActionsRequest &request)
{
    auto outcome = MakeRequest(request, "StopFleetActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopFleetActionsResponse rsp = StopFleetActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopFleetActionsOutcome(rsp);
        else
            return StopFleetActionsOutcome(o.GetError());
    }
    else
    {
        return StopFleetActionsOutcome(outcome.GetError());
    }
}

void GseClient::StopFleetActionsAsync(const StopFleetActionsRequest& request, const StopFleetActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopFleetActions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::StopFleetActionsOutcomeCallable GseClient::StopFleetActionsCallable(const StopFleetActionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopFleetActionsOutcome()>>(
        [this, request]()
        {
            return this->StopFleetActions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::StopGameServerSessionPlacementOutcome GseClient::StopGameServerSessionPlacement(const StopGameServerSessionPlacementRequest &request)
{
    auto outcome = MakeRequest(request, "StopGameServerSessionPlacement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopGameServerSessionPlacementResponse rsp = StopGameServerSessionPlacementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopGameServerSessionPlacementOutcome(rsp);
        else
            return StopGameServerSessionPlacementOutcome(o.GetError());
    }
    else
    {
        return StopGameServerSessionPlacementOutcome(outcome.GetError());
    }
}

void GseClient::StopGameServerSessionPlacementAsync(const StopGameServerSessionPlacementRequest& request, const StopGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopGameServerSessionPlacement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::StopGameServerSessionPlacementOutcomeCallable GseClient::StopGameServerSessionPlacementCallable(const StopGameServerSessionPlacementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopGameServerSessionPlacementOutcome()>>(
        [this, request]()
        {
            return this->StopGameServerSessionPlacement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::UpdateAliasOutcome GseClient::UpdateAlias(const UpdateAliasRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAliasResponse rsp = UpdateAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAliasOutcome(rsp);
        else
            return UpdateAliasOutcome(o.GetError());
    }
    else
    {
        return UpdateAliasOutcome(outcome.GetError());
    }
}

void GseClient::UpdateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::UpdateAliasOutcomeCallable GseClient::UpdateAliasCallable(const UpdateAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAliasOutcome()>>(
        [this, request]()
        {
            return this->UpdateAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::UpdateAssetOutcome GseClient::UpdateAsset(const UpdateAssetRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAssetResponse rsp = UpdateAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAssetOutcome(rsp);
        else
            return UpdateAssetOutcome(o.GetError());
    }
    else
    {
        return UpdateAssetOutcome(outcome.GetError());
    }
}

void GseClient::UpdateAssetAsync(const UpdateAssetRequest& request, const UpdateAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::UpdateAssetOutcomeCallable GseClient::UpdateAssetCallable(const UpdateAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAssetOutcome()>>(
        [this, request]()
        {
            return this->UpdateAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::UpdateFleetAttributesOutcome GseClient::UpdateFleetAttributes(const UpdateFleetAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFleetAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFleetAttributesResponse rsp = UpdateFleetAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFleetAttributesOutcome(rsp);
        else
            return UpdateFleetAttributesOutcome(o.GetError());
    }
    else
    {
        return UpdateFleetAttributesOutcome(outcome.GetError());
    }
}

void GseClient::UpdateFleetAttributesAsync(const UpdateFleetAttributesRequest& request, const UpdateFleetAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateFleetAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::UpdateFleetAttributesOutcomeCallable GseClient::UpdateFleetAttributesCallable(const UpdateFleetAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateFleetAttributesOutcome()>>(
        [this, request]()
        {
            return this->UpdateFleetAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::UpdateFleetPortSettingsOutcome GseClient::UpdateFleetPortSettings(const UpdateFleetPortSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFleetPortSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFleetPortSettingsResponse rsp = UpdateFleetPortSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFleetPortSettingsOutcome(rsp);
        else
            return UpdateFleetPortSettingsOutcome(o.GetError());
    }
    else
    {
        return UpdateFleetPortSettingsOutcome(outcome.GetError());
    }
}

void GseClient::UpdateFleetPortSettingsAsync(const UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateFleetPortSettings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::UpdateFleetPortSettingsOutcomeCallable GseClient::UpdateFleetPortSettingsCallable(const UpdateFleetPortSettingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateFleetPortSettingsOutcome()>>(
        [this, request]()
        {
            return this->UpdateFleetPortSettings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::UpdateGameServerSessionOutcome GseClient::UpdateGameServerSession(const UpdateGameServerSessionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGameServerSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGameServerSessionResponse rsp = UpdateGameServerSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGameServerSessionOutcome(rsp);
        else
            return UpdateGameServerSessionOutcome(o.GetError());
    }
    else
    {
        return UpdateGameServerSessionOutcome(outcome.GetError());
    }
}

void GseClient::UpdateGameServerSessionAsync(const UpdateGameServerSessionRequest& request, const UpdateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateGameServerSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::UpdateGameServerSessionOutcomeCallable GseClient::UpdateGameServerSessionCallable(const UpdateGameServerSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateGameServerSessionOutcome()>>(
        [this, request]()
        {
            return this->UpdateGameServerSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GseClient::UpdateRuntimeConfigurationOutcome GseClient::UpdateRuntimeConfiguration(const UpdateRuntimeConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRuntimeConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRuntimeConfigurationResponse rsp = UpdateRuntimeConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRuntimeConfigurationOutcome(rsp);
        else
            return UpdateRuntimeConfigurationOutcome(o.GetError());
    }
    else
    {
        return UpdateRuntimeConfigurationOutcome(outcome.GetError());
    }
}

void GseClient::UpdateRuntimeConfigurationAsync(const UpdateRuntimeConfigurationRequest& request, const UpdateRuntimeConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRuntimeConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GseClient::UpdateRuntimeConfigurationOutcomeCallable GseClient::UpdateRuntimeConfigurationCallable(const UpdateRuntimeConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRuntimeConfigurationOutcome()>>(
        [this, request]()
        {
            return this->UpdateRuntimeConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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

#include <tencentcloud/aa/v20200224/AaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Aa::V20200224;
using namespace TencentCloud::Aa::V20200224::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-24";
    const string ENDPOINT = "aa.tencentcloudapi.com";
}

AaClient::AaClient(const Credential &credential, const string &region) :
    AaClient(credential, region, ClientProfile())
{
}

AaClient::AaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AaClient::ManageMarketingRiskOutcome AaClient::ManageMarketingRisk(const ManageMarketingRiskRequest &request)
{
    auto outcome = MakeRequest(request, "ManageMarketingRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageMarketingRiskResponse rsp = ManageMarketingRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageMarketingRiskOutcome(rsp);
        else
            return ManageMarketingRiskOutcome(o.GetError());
    }
    else
    {
        return ManageMarketingRiskOutcome(outcome.GetError());
    }
}

void AaClient::ManageMarketingRiskAsync(const ManageMarketingRiskRequest& request, const ManageMarketingRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageMarketingRisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AaClient::ManageMarketingRiskOutcomeCallable AaClient::ManageMarketingRiskCallable(const ManageMarketingRiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManageMarketingRiskOutcome()>>(
        [this, request]()
        {
            return this->ManageMarketingRisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AaClient::QueryActivityAntiRushOutcome AaClient::QueryActivityAntiRush(const QueryActivityAntiRushRequest &request)
{
    auto outcome = MakeRequest(request, "QueryActivityAntiRush");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryActivityAntiRushResponse rsp = QueryActivityAntiRushResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryActivityAntiRushOutcome(rsp);
        else
            return QueryActivityAntiRushOutcome(o.GetError());
    }
    else
    {
        return QueryActivityAntiRushOutcome(outcome.GetError());
    }
}

void AaClient::QueryActivityAntiRushAsync(const QueryActivityAntiRushRequest& request, const QueryActivityAntiRushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryActivityAntiRush(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AaClient::QueryActivityAntiRushOutcomeCallable AaClient::QueryActivityAntiRushCallable(const QueryActivityAntiRushRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryActivityAntiRushOutcome()>>(
        [this, request]()
        {
            return this->QueryActivityAntiRush(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AaClient::QueryActivityAntiRushAdvancedOutcome AaClient::QueryActivityAntiRushAdvanced(const QueryActivityAntiRushAdvancedRequest &request)
{
    auto outcome = MakeRequest(request, "QueryActivityAntiRushAdvanced");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryActivityAntiRushAdvancedResponse rsp = QueryActivityAntiRushAdvancedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryActivityAntiRushAdvancedOutcome(rsp);
        else
            return QueryActivityAntiRushAdvancedOutcome(o.GetError());
    }
    else
    {
        return QueryActivityAntiRushAdvancedOutcome(outcome.GetError());
    }
}

void AaClient::QueryActivityAntiRushAdvancedAsync(const QueryActivityAntiRushAdvancedRequest& request, const QueryActivityAntiRushAdvancedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryActivityAntiRushAdvanced(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AaClient::QueryActivityAntiRushAdvancedOutcomeCallable AaClient::QueryActivityAntiRushAdvancedCallable(const QueryActivityAntiRushAdvancedRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryActivityAntiRushAdvancedOutcome()>>(
        [this, request]()
        {
            return this->QueryActivityAntiRushAdvanced(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


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

#ifndef TENCENTCLOUD_ECC_V20181213_ECCCLIENT_H_
#define TENCENTCLOUD_ECC_V20181213_ECCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ecc/v20181213/model/ECCRequest.h>
#include <tencentcloud/ecc/v20181213/model/ECCResponse.h>
#include <tencentcloud/ecc/v20181213/model/EHOCRRequest.h>
#include <tencentcloud/ecc/v20181213/model/EHOCRResponse.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            class EccClient : public AbstractClient
            {
            public:
                EccClient(const Credential &credential, const std::string &region);
                EccClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::ECCResponse> ECCOutcome;
                typedef std::future<ECCOutcome> ECCOutcomeCallable;
                typedef std::function<void(const EccClient*, const Model::ECCRequest&, ECCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ECCAsyncHandler;
                typedef Outcome<Error, Model::EHOCRResponse> EHOCROutcome;
                typedef std::future<EHOCROutcome> EHOCROutcomeCallable;
                typedef std::function<void(const EccClient*, const Model::EHOCRRequest&, EHOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> EHOCRAsyncHandler;



                /**
                 *接口请求域名： ecc.tencentcloudapi.com 
纯文本英语作文批改
                 * @param req ECCRequest
                 * @return ECCOutcome
                 */
                ECCOutcome ECC(const Model::ECCRequest &request);
                void ECCAsync(const Model::ECCRequest& request, const ECCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ECCOutcomeCallable ECCCallable(const Model::ECCRequest& request);

                /**
                 *https://ecc.tencentcloudapi.com/?Action=EHOCR
作文识别
                 * @param req EHOCRRequest
                 * @return EHOCROutcome
                 */
                EHOCROutcome EHOCR(const Model::EHOCRRequest &request);
                void EHOCRAsync(const Model::EHOCRRequest& request, const EHOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EHOCROutcomeCallable EHOCRCallable(const Model::EHOCRRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_ECCCLIENT_H_

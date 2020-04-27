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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace rapidjson;
using namespace std;

DescribeCaptchaResultResponse::DescribeCaptchaResultResponse() :
    m_captchaCodeHasBeenSet(false),
    m_captchaMsgHasBeenSet(false),
    m_evilLevelHasBeenSet(false),
    m_getCaptchaTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCaptchaResultResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("CaptchaCode") && !rsp["CaptchaCode"].IsNull())
    {
        if (!rsp["CaptchaCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CaptchaCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_captchaCode = rsp["CaptchaCode"].GetInt64();
        m_captchaCodeHasBeenSet = true;
    }

    if (rsp.HasMember("CaptchaMsg") && !rsp["CaptchaMsg"].IsNull())
    {
        if (!rsp["CaptchaMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `CaptchaMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_captchaMsg = string(rsp["CaptchaMsg"].GetString());
        m_captchaMsgHasBeenSet = true;
    }

    if (rsp.HasMember("EvilLevel") && !rsp["EvilLevel"].IsNull())
    {
        if (!rsp["EvilLevel"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EvilLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilLevel = rsp["EvilLevel"].GetInt64();
        m_evilLevelHasBeenSet = true;
    }

    if (rsp.HasMember("GetCaptchaTime") && !rsp["GetCaptchaTime"].IsNull())
    {
        if (!rsp["GetCaptchaTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `GetCaptchaTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_getCaptchaTime = rsp["GetCaptchaTime"].GetInt64();
        m_getCaptchaTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeCaptchaResultResponse::GetCaptchaCode() const
{
    return m_captchaCode;
}

bool DescribeCaptchaResultResponse::CaptchaCodeHasBeenSet() const
{
    return m_captchaCodeHasBeenSet;
}

string DescribeCaptchaResultResponse::GetCaptchaMsg() const
{
    return m_captchaMsg;
}

bool DescribeCaptchaResultResponse::CaptchaMsgHasBeenSet() const
{
    return m_captchaMsgHasBeenSet;
}

int64_t DescribeCaptchaResultResponse::GetEvilLevel() const
{
    return m_evilLevel;
}

bool DescribeCaptchaResultResponse::EvilLevelHasBeenSet() const
{
    return m_evilLevelHasBeenSet;
}

int64_t DescribeCaptchaResultResponse::GetGetCaptchaTime() const
{
    return m_getCaptchaTime;
}

bool DescribeCaptchaResultResponse::GetCaptchaTimeHasBeenSet() const
{
    return m_getCaptchaTimeHasBeenSet;
}


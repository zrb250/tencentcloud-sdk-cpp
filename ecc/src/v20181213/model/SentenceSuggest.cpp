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

#include <tencentcloud/ecc/v20181213/model/SentenceSuggest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecc::V20181213::Model;
using namespace rapidjson;
using namespace std;

SentenceSuggest::SentenceSuggest() :
    m_typeHasBeenSet(false),
    m_errorTypeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_replaceHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome SentenceSuggest::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `SentenceSuggest.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ErrorType") && !value["ErrorType"].IsNull())
    {
        if (!value["ErrorType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SentenceSuggest.ErrorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorType = string(value["ErrorType"].GetString());
        m_errorTypeHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsString())
        {
            return CoreInternalOutcome(Error("response `SentenceSuggest.Origin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_origin = string(value["Origin"].GetString());
        m_originHasBeenSet = true;
    }

    if (value.HasMember("Replace") && !value["Replace"].IsNull())
    {
        if (!value["Replace"].IsString())
        {
            return CoreInternalOutcome(Error("response `SentenceSuggest.Replace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replace = string(value["Replace"].GetString());
        m_replaceHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `SentenceSuggest.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SentenceSuggest::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_errorTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_errorType.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_origin.c_str(), allocator).Move(), allocator);
    }

    if (m_replaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Replace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_replace.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string SentenceSuggest::GetType() const
{
    return m_type;
}

void SentenceSuggest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SentenceSuggest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SentenceSuggest::GetErrorType() const
{
    return m_errorType;
}

void SentenceSuggest::SetErrorType(const string& _errorType)
{
    m_errorType = _errorType;
    m_errorTypeHasBeenSet = true;
}

bool SentenceSuggest::ErrorTypeHasBeenSet() const
{
    return m_errorTypeHasBeenSet;
}

string SentenceSuggest::GetOrigin() const
{
    return m_origin;
}

void SentenceSuggest::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool SentenceSuggest::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string SentenceSuggest::GetReplace() const
{
    return m_replace;
}

void SentenceSuggest::SetReplace(const string& _replace)
{
    m_replace = _replace;
    m_replaceHasBeenSet = true;
}

bool SentenceSuggest::ReplaceHasBeenSet() const
{
    return m_replaceHasBeenSet;
}

string SentenceSuggest::GetMessage() const
{
    return m_message;
}

void SentenceSuggest::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SentenceSuggest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}


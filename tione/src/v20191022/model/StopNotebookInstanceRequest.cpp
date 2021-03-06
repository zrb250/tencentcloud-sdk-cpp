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

#include <tencentcloud/tione/v20191022/model/StopNotebookInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20191022::Model;
using namespace rapidjson;
using namespace std;

StopNotebookInstanceRequest::StopNotebookInstanceRequest() :
    m_notebookInstanceNameHasBeenSet(false)
{
}

string StopNotebookInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_notebookInstanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotebookInstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_notebookInstanceName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StopNotebookInstanceRequest::GetNotebookInstanceName() const
{
    return m_notebookInstanceName;
}

void StopNotebookInstanceRequest::SetNotebookInstanceName(const string& _notebookInstanceName)
{
    m_notebookInstanceName = _notebookInstanceName;
    m_notebookInstanceNameHasBeenSet = true;
}

bool StopNotebookInstanceRequest::NotebookInstanceNameHasBeenSet() const
{
    return m_notebookInstanceNameHasBeenSet;
}



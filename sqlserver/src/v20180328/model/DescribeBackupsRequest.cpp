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

#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

DescribeBackupsRequest::DescribeBackupsRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_backupWayHasBeenSet(false),
    m_backupIdHasBeenSet(false)
{
}

string DescribeBackupsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_backupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_backupName.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strategy, allocator);
    }

    if (m_backupWayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupWay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupWay, allocator);
    }

    if (m_backupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBackupsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeBackupsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeBackupsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBackupsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBackupsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBackupsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeBackupsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeBackupsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeBackupsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeBackupsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBackupsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBackupsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBackupsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBackupsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBackupsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeBackupsRequest::GetBackupName() const
{
    return m_backupName;
}

void DescribeBackupsRequest::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool DescribeBackupsRequest::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}

int64_t DescribeBackupsRequest::GetStrategy() const
{
    return m_strategy;
}

void DescribeBackupsRequest::SetStrategy(const int64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool DescribeBackupsRequest::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

int64_t DescribeBackupsRequest::GetBackupWay() const
{
    return m_backupWay;
}

void DescribeBackupsRequest::SetBackupWay(const int64_t& _backupWay)
{
    m_backupWay = _backupWay;
    m_backupWayHasBeenSet = true;
}

bool DescribeBackupsRequest::BackupWayHasBeenSet() const
{
    return m_backupWayHasBeenSet;
}

uint64_t DescribeBackupsRequest::GetBackupId() const
{
    return m_backupId;
}

void DescribeBackupsRequest::SetBackupId(const uint64_t& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool DescribeBackupsRequest::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}



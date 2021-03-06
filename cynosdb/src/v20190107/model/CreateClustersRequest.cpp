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

#include <tencentcloud/cynosdb/v20190107/model/CreateClustersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace rapidjson;
using namespace std;

CreateClustersRequest::CreateClustersRequest() :
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_adminPasswordHasBeenSet(false),
    m_portHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_rollbackStrategyHasBeenSet(false),
    m_rollbackIdHasBeenSet(false),
    m_originalClusterIdHasBeenSet(false),
    m_expectTimeHasBeenSet(false),
    m_expectTimeThreshHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_haCountHasBeenSet(false),
    m_orderSourceHasBeenSet(false),
    m_resourceTagsHasBeenSet(false)
{
}

string CreateClustersRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_storageLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_storageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminPasswordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdminPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_adminPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_countHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_rollbackStrategyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RollbackStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_rollbackStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RollbackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rollbackId, allocator);
    }

    if (m_originalClusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginalClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_originalClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_expectTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpectTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_expectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expectTimeThreshHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpectTimeThresh";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expectTimeThresh, allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_haCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HaCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_haCount, allocator);
    }

    if (m_orderSourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderSource.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClustersRequest::GetZone() const
{
    return m_zone;
}

void CreateClustersRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateClustersRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateClustersRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateClustersRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateClustersRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateClustersRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateClustersRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateClustersRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateClustersRequest::GetDbType() const
{
    return m_dbType;
}

void CreateClustersRequest::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool CreateClustersRequest::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string CreateClustersRequest::GetDbVersion() const
{
    return m_dbVersion;
}

void CreateClustersRequest::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool CreateClustersRequest::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

int64_t CreateClustersRequest::GetCpu() const
{
    return m_cpu;
}

void CreateClustersRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateClustersRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t CreateClustersRequest::GetMemory() const
{
    return m_memory;
}

void CreateClustersRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateClustersRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CreateClustersRequest::GetStorageLimit() const
{
    return m_storageLimit;
}

void CreateClustersRequest::SetStorageLimit(const int64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool CreateClustersRequest::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

int64_t CreateClustersRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateClustersRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateClustersRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateClustersRequest::GetStorage() const
{
    return m_storage;
}

void CreateClustersRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CreateClustersRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string CreateClustersRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateClustersRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateClustersRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CreateClustersRequest::GetAdminPassword() const
{
    return m_adminPassword;
}

void CreateClustersRequest::SetAdminPassword(const string& _adminPassword)
{
    m_adminPassword = _adminPassword;
    m_adminPasswordHasBeenSet = true;
}

bool CreateClustersRequest::AdminPasswordHasBeenSet() const
{
    return m_adminPasswordHasBeenSet;
}

int64_t CreateClustersRequest::GetPort() const
{
    return m_port;
}

void CreateClustersRequest::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateClustersRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t CreateClustersRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateClustersRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateClustersRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t CreateClustersRequest::GetCount() const
{
    return m_count;
}

void CreateClustersRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateClustersRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string CreateClustersRequest::GetRollbackStrategy() const
{
    return m_rollbackStrategy;
}

void CreateClustersRequest::SetRollbackStrategy(const string& _rollbackStrategy)
{
    m_rollbackStrategy = _rollbackStrategy;
    m_rollbackStrategyHasBeenSet = true;
}

bool CreateClustersRequest::RollbackStrategyHasBeenSet() const
{
    return m_rollbackStrategyHasBeenSet;
}

uint64_t CreateClustersRequest::GetRollbackId() const
{
    return m_rollbackId;
}

void CreateClustersRequest::SetRollbackId(const uint64_t& _rollbackId)
{
    m_rollbackId = _rollbackId;
    m_rollbackIdHasBeenSet = true;
}

bool CreateClustersRequest::RollbackIdHasBeenSet() const
{
    return m_rollbackIdHasBeenSet;
}

string CreateClustersRequest::GetOriginalClusterId() const
{
    return m_originalClusterId;
}

void CreateClustersRequest::SetOriginalClusterId(const string& _originalClusterId)
{
    m_originalClusterId = _originalClusterId;
    m_originalClusterIdHasBeenSet = true;
}

bool CreateClustersRequest::OriginalClusterIdHasBeenSet() const
{
    return m_originalClusterIdHasBeenSet;
}

string CreateClustersRequest::GetExpectTime() const
{
    return m_expectTime;
}

void CreateClustersRequest::SetExpectTime(const string& _expectTime)
{
    m_expectTime = _expectTime;
    m_expectTimeHasBeenSet = true;
}

bool CreateClustersRequest::ExpectTimeHasBeenSet() const
{
    return m_expectTimeHasBeenSet;
}

uint64_t CreateClustersRequest::GetExpectTimeThresh() const
{
    return m_expectTimeThresh;
}

void CreateClustersRequest::SetExpectTimeThresh(const uint64_t& _expectTimeThresh)
{
    m_expectTimeThresh = _expectTimeThresh;
    m_expectTimeThreshHasBeenSet = true;
}

bool CreateClustersRequest::ExpectTimeThreshHasBeenSet() const
{
    return m_expectTimeThreshHasBeenSet;
}

int64_t CreateClustersRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void CreateClustersRequest::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CreateClustersRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t CreateClustersRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateClustersRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateClustersRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CreateClustersRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateClustersRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateClustersRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t CreateClustersRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateClustersRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateClustersRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t CreateClustersRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateClustersRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateClustersRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

int64_t CreateClustersRequest::GetHaCount() const
{
    return m_haCount;
}

void CreateClustersRequest::SetHaCount(const int64_t& _haCount)
{
    m_haCount = _haCount;
    m_haCountHasBeenSet = true;
}

bool CreateClustersRequest::HaCountHasBeenSet() const
{
    return m_haCountHasBeenSet;
}

string CreateClustersRequest::GetOrderSource() const
{
    return m_orderSource;
}

void CreateClustersRequest::SetOrderSource(const string& _orderSource)
{
    m_orderSource = _orderSource;
    m_orderSourceHasBeenSet = true;
}

bool CreateClustersRequest::OrderSourceHasBeenSet() const
{
    return m_orderSourceHasBeenSet;
}

vector<Tag> CreateClustersRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateClustersRequest::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateClustersRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}



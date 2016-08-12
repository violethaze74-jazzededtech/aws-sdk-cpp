﻿
/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/route53/model/Change.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

Change::Change() : 
    m_actionHasBeenSet(false),
    m_resourceRecordSetHasBeenSet(false)
{
}

Change::Change(const XmlNode& xmlNode) : 
    m_actionHasBeenSet(false),
    m_resourceRecordSetHasBeenSet(false)
{
  *this = xmlNode;
}

Change& Change::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode actionNode = resultNode.FirstChild("Action");
    if(!actionNode.IsNull())
    {
      m_action = ChangeActionMapper::GetChangeActionForName(StringUtils::Trim(actionNode.GetText().c_str()).c_str());
      m_actionHasBeenSet = true;
    }
    XmlNode resourceRecordSetNode = resultNode.FirstChild("ResourceRecordSet");
    if(!resourceRecordSetNode.IsNull())
    {
      m_resourceRecordSet = resourceRecordSetNode;
      m_resourceRecordSetHasBeenSet = true;
    }
  }

  return *this;
}

void Change::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_actionHasBeenSet)
  {
   XmlNode actionNode = parentNode.CreateChildElement("Action");
   actionNode.SetText(ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_resourceRecordSetHasBeenSet)
  {
   XmlNode resourceRecordSetNode = parentNode.CreateChildElement("ResourceRecordSet");
   m_resourceRecordSet.AddToNode(resourceRecordSetNode);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws

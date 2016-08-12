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
#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The type of constraints associated with an attribute of the string type.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API StringAttributeConstraintsType
  {
  public:
    StringAttributeConstraintsType();
    StringAttributeConstraintsType(const Aws::Utils::Json::JsonValue& jsonValue);
    StringAttributeConstraintsType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The minimum length of an attribute value of the string type.</p>
     */
    inline const Aws::String& GetMinLength() const{ return m_minLength; }

    /**
     * <p>The minimum length of an attribute value of the string type.</p>
     */
    inline void SetMinLength(const Aws::String& value) { m_minLengthHasBeenSet = true; m_minLength = value; }

    /**
     * <p>The minimum length of an attribute value of the string type.</p>
     */
    inline void SetMinLength(Aws::String&& value) { m_minLengthHasBeenSet = true; m_minLength = value; }

    /**
     * <p>The minimum length of an attribute value of the string type.</p>
     */
    inline void SetMinLength(const char* value) { m_minLengthHasBeenSet = true; m_minLength.assign(value); }

    /**
     * <p>The minimum length of an attribute value of the string type.</p>
     */
    inline StringAttributeConstraintsType& WithMinLength(const Aws::String& value) { SetMinLength(value); return *this;}

    /**
     * <p>The minimum length of an attribute value of the string type.</p>
     */
    inline StringAttributeConstraintsType& WithMinLength(Aws::String&& value) { SetMinLength(value); return *this;}

    /**
     * <p>The minimum length of an attribute value of the string type.</p>
     */
    inline StringAttributeConstraintsType& WithMinLength(const char* value) { SetMinLength(value); return *this;}

    /**
     * <p>The maximum length of an attribute value of the string type.</p>
     */
    inline const Aws::String& GetMaxLength() const{ return m_maxLength; }

    /**
     * <p>The maximum length of an attribute value of the string type.</p>
     */
    inline void SetMaxLength(const Aws::String& value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }

    /**
     * <p>The maximum length of an attribute value of the string type.</p>
     */
    inline void SetMaxLength(Aws::String&& value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }

    /**
     * <p>The maximum length of an attribute value of the string type.</p>
     */
    inline void SetMaxLength(const char* value) { m_maxLengthHasBeenSet = true; m_maxLength.assign(value); }

    /**
     * <p>The maximum length of an attribute value of the string type.</p>
     */
    inline StringAttributeConstraintsType& WithMaxLength(const Aws::String& value) { SetMaxLength(value); return *this;}

    /**
     * <p>The maximum length of an attribute value of the string type.</p>
     */
    inline StringAttributeConstraintsType& WithMaxLength(Aws::String&& value) { SetMaxLength(value); return *this;}

    /**
     * <p>The maximum length of an attribute value of the string type.</p>
     */
    inline StringAttributeConstraintsType& WithMaxLength(const char* value) { SetMaxLength(value); return *this;}

  private:
    Aws::String m_minLength;
    bool m_minLengthHasBeenSet;
    Aws::String m_maxLength;
    bool m_maxLengthHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws

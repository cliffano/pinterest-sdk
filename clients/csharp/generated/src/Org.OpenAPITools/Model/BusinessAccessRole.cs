/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Runtime.Serialization;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using Newtonsoft.Json.Linq;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// Permission role for business access.
    /// </summary>
    /// <value>Permission role for business access.</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum BusinessAccessRole
    {
        /// <summary>
        /// Enum OWNER for value: OWNER
        /// </summary>
        [EnumMember(Value = "OWNER")]
        OWNER = 1,

        /// <summary>
        /// Enum ADMIN for value: ADMIN
        /// </summary>
        [EnumMember(Value = "ADMIN")]
        ADMIN = 2,

        /// <summary>
        /// Enum ANALYST for value: ANALYST
        /// </summary>
        [EnumMember(Value = "ANALYST")]
        ANALYST = 3,

        /// <summary>
        /// Enum SOSREADER for value: SOS_READER
        /// </summary>
        [EnumMember(Value = "SOS_READER")]
        SOSREADER = 4,

        /// <summary>
        /// Enum FINANCEMANAGER for value: FINANCE_MANAGER
        /// </summary>
        [EnumMember(Value = "FINANCE_MANAGER")]
        FINANCEMANAGER = 5,

        /// <summary>
        /// Enum AUDIENCEMANAGER for value: AUDIENCE_MANAGER
        /// </summary>
        [EnumMember(Value = "AUDIENCE_MANAGER")]
        AUDIENCEMANAGER = 6,

        /// <summary>
        /// Enum CAMPAIGNMANAGER for value: CAMPAIGN_MANAGER
        /// </summary>
        [EnumMember(Value = "CAMPAIGN_MANAGER")]
        CAMPAIGNMANAGER = 7,

        /// <summary>
        /// Enum CATALOGSMANAGER for value: CATALOGS_MANAGER
        /// </summary>
        [EnumMember(Value = "CATALOGS_MANAGER")]
        CATALOGSMANAGER = 8,

        /// <summary>
        /// Enum RESTRICTEDOWNER for value: RESTRICTED_OWNER
        /// </summary>
        [EnumMember(Value = "RESTRICTED_OWNER")]
        RESTRICTEDOWNER = 9,

        /// <summary>
        /// Enum PROFILEMANAGER for value: PROFILE_MANAGER
        /// </summary>
        [EnumMember(Value = "PROFILE_MANAGER")]
        PROFILEMANAGER = 10,

        /// <summary>
        /// Enum PROFILEPUBLISHER for value: PROFILE_PUBLISHER
        /// </summary>
        [EnumMember(Value = "PROFILE_PUBLISHER")]
        PROFILEPUBLISHER = 11,

        /// <summary>
        /// Enum RESOURCEPINNERLISTOWNER for value: RESOURCE_PINNER_LIST_OWNER
        /// </summary>
        [EnumMember(Value = "RESOURCE_PINNER_LIST_OWNER")]
        RESOURCEPINNERLISTOWNER = 12,

        /// <summary>
        /// Enum RESOURCEPINNERLISTREADER for value: RESOURCE_PINNER_LIST_READER
        /// </summary>
        [EnumMember(Value = "RESOURCE_PINNER_LIST_READER")]
        RESOURCEPINNERLISTREADER = 13,

        /// <summary>
        /// Enum BIZPINNERLISTSHARER for value: BIZ_PINNER_LIST_SHARER
        /// </summary>
        [EnumMember(Value = "BIZ_PINNER_LIST_SHARER")]
        BIZPINNERLISTSHARER = 14,

        /// <summary>
        /// Enum RESOURCECONVERSIONTAGSREADER for value: RESOURCE_CONVERSION_TAGS_READER
        /// </summary>
        [EnumMember(Value = "RESOURCE_CONVERSION_TAGS_READER")]
        RESOURCECONVERSIONTAGSREADER = 15
    }

}

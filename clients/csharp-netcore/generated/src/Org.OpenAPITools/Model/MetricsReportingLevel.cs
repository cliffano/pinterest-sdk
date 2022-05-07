/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
    /// Level of the reporting request
    /// </summary>
    /// <value>Level of the reporting request</value>
    [JsonConverter(typeof(StringEnumConverter))]
    public enum MetricsReportingLevel
    {
        /// <summary>
        /// Enum ADVERTISER for value: ADVERTISER
        /// </summary>
        [EnumMember(Value = "ADVERTISER")]
        ADVERTISER = 1,

        /// <summary>
        /// Enum ADVERTISERTARGETING for value: ADVERTISER_TARGETING
        /// </summary>
        [EnumMember(Value = "ADVERTISER_TARGETING")]
        ADVERTISERTARGETING = 2,

        /// <summary>
        /// Enum CAMPAIGN for value: CAMPAIGN
        /// </summary>
        [EnumMember(Value = "CAMPAIGN")]
        CAMPAIGN = 3,

        /// <summary>
        /// Enum CAMPAIGNTARGETING for value: CAMPAIGN_TARGETING
        /// </summary>
        [EnumMember(Value = "CAMPAIGN_TARGETING")]
        CAMPAIGNTARGETING = 4,

        /// <summary>
        /// Enum ADGROUP for value: AD_GROUP
        /// </summary>
        [EnumMember(Value = "AD_GROUP")]
        ADGROUP = 5,

        /// <summary>
        /// Enum ADGROUPTARGETING for value: AD_GROUP_TARGETING
        /// </summary>
        [EnumMember(Value = "AD_GROUP_TARGETING")]
        ADGROUPTARGETING = 6,

        /// <summary>
        /// Enum PINPROMOTION for value: PIN_PROMOTION
        /// </summary>
        [EnumMember(Value = "PIN_PROMOTION")]
        PINPROMOTION = 7,

        /// <summary>
        /// Enum PINPROMOTIONTARGETING for value: PIN_PROMOTION_TARGETING
        /// </summary>
        [EnumMember(Value = "PIN_PROMOTION_TARGETING")]
        PINPROMOTIONTARGETING = 8,

        /// <summary>
        /// Enum KEYWORD for value: KEYWORD
        /// </summary>
        [EnumMember(Value = "KEYWORD")]
        KEYWORD = 9,

        /// <summary>
        /// Enum PRODUCTGROUP for value: PRODUCT_GROUP
        /// </summary>
        [EnumMember(Value = "PRODUCT_GROUP")]
        PRODUCTGROUP = 10,

        /// <summary>
        /// Enum PRODUCTGROUPTARGETING for value: PRODUCT_GROUP_TARGETING
        /// </summary>
        [EnumMember(Value = "PRODUCT_GROUP_TARGETING")]
        PRODUCTGROUPTARGETING = 11,

        /// <summary>
        /// Enum PRODUCTITEM for value: PRODUCT_ITEM
        /// </summary>
        [EnumMember(Value = "PRODUCT_ITEM")]
        PRODUCTITEM = 12

    }

}

/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Org.OpenAPITools.Converters;

namespace Org.OpenAPITools.Models
{ 
        /// <summary>
        /// Summary status for campaign
        /// </summary>
        /// <value>Summary status for campaign</value>
        [TypeConverter(typeof(CustomEnumConverter<CampaignSummaryStatus>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum CampaignSummaryStatus
        {
            
            /// <summary>
            /// Enum RUNNINGEnum for RUNNING
            /// </summary>
            [EnumMember(Value = "RUNNING")]
            RUNNINGEnum = 1,
            
            /// <summary>
            /// Enum PAUSEDEnum for PAUSED
            /// </summary>
            [EnumMember(Value = "PAUSED")]
            PAUSEDEnum = 2,
            
            /// <summary>
            /// Enum NOTSTARTEDEnum for NOT_STARTED
            /// </summary>
            [EnumMember(Value = "NOT_STARTED")]
            NOTSTARTEDEnum = 3,
            
            /// <summary>
            /// Enum COMPLETEDEnum for COMPLETED
            /// </summary>
            [EnumMember(Value = "COMPLETED")]
            COMPLETEDEnum = 4,
            
            /// <summary>
            /// Enum ADVERTISERDISABLEDEnum for ADVERTISER_DISABLED
            /// </summary>
            [EnumMember(Value = "ADVERTISER_DISABLED")]
            ADVERTISERDISABLEDEnum = 5,
            
            /// <summary>
            /// Enum ARCHIVEDEnum for ARCHIVED
            /// </summary>
            [EnumMember(Value = "ARCHIVED")]
            ARCHIVEDEnum = 6
        }
}

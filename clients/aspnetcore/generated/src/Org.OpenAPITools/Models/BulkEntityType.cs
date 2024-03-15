/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
        /// Refers ads entity type
        /// </summary>
        /// <value>Refers ads entity type</value>
        [TypeConverter(typeof(CustomEnumConverter<BulkEntityType>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum BulkEntityType
        {
            
            /// <summary>
            /// Enum CAMPAIGNEnum for CAMPAIGN
            /// </summary>
            [EnumMember(Value = "CAMPAIGN")]
            CAMPAIGNEnum = 1,
            
            /// <summary>
            /// Enum ADGROUPEnum for AD_GROUP
            /// </summary>
            [EnumMember(Value = "AD_GROUP")]
            ADGROUPEnum = 2,
            
            /// <summary>
            /// Enum PRODUCTGROUPEnum for PRODUCT_GROUP
            /// </summary>
            [EnumMember(Value = "PRODUCT_GROUP")]
            PRODUCTGROUPEnum = 3,
            
            /// <summary>
            /// Enum ADEnum for AD
            /// </summary>
            [EnumMember(Value = "AD")]
            ADEnum = 4,
            
            /// <summary>
            /// Enum KEYWORDEnum for KEYWORD
            /// </summary>
            [EnumMember(Value = "KEYWORD")]
            KEYWORDEnum = 5
        }
}

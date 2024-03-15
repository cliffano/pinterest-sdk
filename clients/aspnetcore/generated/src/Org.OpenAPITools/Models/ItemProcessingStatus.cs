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
        /// The status of the item processing record
        /// </summary>
        /// <value>The status of the item processing record</value>
        [TypeConverter(typeof(CustomEnumConverter<ItemProcessingStatus>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum ItemProcessingStatus
        {
            
            /// <summary>
            /// Enum SUCCESSEnum for SUCCESS
            /// </summary>
            [EnumMember(Value = "SUCCESS")]
            SUCCESSEnum = 1,
            
            /// <summary>
            /// Enum FAILUREEnum for FAILURE
            /// </summary>
            [EnumMember(Value = "FAILURE")]
            FAILUREEnum = 2,
            
            /// <summary>
            /// Enum PROCESSINGEnum for PROCESSING
            /// </summary>
            [EnumMember(Value = "PROCESSING")]
            PROCESSINGEnum = 3
        }
}
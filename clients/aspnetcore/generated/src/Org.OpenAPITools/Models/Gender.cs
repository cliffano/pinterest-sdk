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
        /// Gets or Sets Gender
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<Gender>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum Gender
        {
            
            /// <summary>
            /// Enum FEMALEEnum for FEMALE
            /// </summary>
            [EnumMember(Value = "FEMALE")]
            FEMALEEnum = 1,
            
            /// <summary>
            /// Enum MALEEnum for MALE
            /// </summary>
            [EnumMember(Value = "MALE")]
            MALEEnum = 2,
            
            /// <summary>
            /// Enum UNISEXEnum for UNISEX
            /// </summary>
            [EnumMember(Value = "UNISEX")]
            UNISEXEnum = 3
        }
}

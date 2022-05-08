/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
        /// Gets or Sets CatalogsProductGroupStatus
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<CatalogsProductGroupStatus>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum CatalogsProductGroupStatus
        {
            
            /// <summary>
            /// Enum ACTIVEEnum for ACTIVE
            /// </summary>
            [EnumMember(Value = "ACTIVE")]
            ACTIVEEnum = 1,
            
            /// <summary>
            /// Enum INACTIVEEnum for INACTIVE
            /// </summary>
            [EnumMember(Value = "INACTIVE")]
            INACTIVEEnum = 2
        }
}
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
        /// User list operation type (add or remove)
        /// </summary>
        /// <value>User list operation type (add or remove)</value>
        [TypeConverter(typeof(CustomEnumConverter<UserListOperationType>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum UserListOperationType
        {
            
            /// <summary>
            /// Enum ADDEnum for ADD
            /// </summary>
            [EnumMember(Value = "ADD")]
            ADDEnum = 1,
            
            /// <summary>
            /// Enum REMOVEEnum for REMOVE
            /// </summary>
            [EnumMember(Value = "REMOVE")]
            REMOVEEnum = 2
        }
}
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
        /// Gets or Sets CatalogsFeedProcessingStatus
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<CatalogsFeedProcessingStatus>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum CatalogsFeedProcessingStatus
        {
            
            /// <summary>
            /// Enum COMPLETEDEnum for COMPLETED
            /// </summary>
            [EnumMember(Value = "COMPLETED")]
            COMPLETEDEnum = 1,
            
            /// <summary>
            /// Enum COMPLETEDEARLYEnum for COMPLETED_EARLY
            /// </summary>
            [EnumMember(Value = "COMPLETED_EARLY")]
            COMPLETEDEARLYEnum = 2,
            
            /// <summary>
            /// Enum DISAPPROVEDEnum for DISAPPROVED
            /// </summary>
            [EnumMember(Value = "DISAPPROVED")]
            DISAPPROVEDEnum = 3,
            
            /// <summary>
            /// Enum FAILEDEnum for FAILED
            /// </summary>
            [EnumMember(Value = "FAILED")]
            FAILEDEnum = 4,
            
            /// <summary>
            /// Enum PROCESSINGEnum for PROCESSING
            /// </summary>
            [EnumMember(Value = "PROCESSING")]
            PROCESSINGEnum = 5,
            
            /// <summary>
            /// Enum QUEUEDFORPROCESSINGEnum for QUEUED_FOR_PROCESSING
            /// </summary>
            [EnumMember(Value = "QUEUED_FOR_PROCESSING")]
            QUEUEDFORPROCESSINGEnum = 6,
            
            /// <summary>
            /// Enum UNDERAPPEALEnum for UNDER_APPEAL
            /// </summary>
            [EnumMember(Value = "UNDER_APPEAL")]
            UNDERAPPEALEnum = 7,
            
            /// <summary>
            /// Enum UNDERREVIEWEnum for UNDER_REVIEW
            /// </summary>
            [EnumMember(Value = "UNDER_REVIEW")]
            UNDERREVIEWEnum = 8
        }
}

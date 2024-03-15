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
        /// Permission role for business access.
        /// </summary>
        /// <value>Permission role for business access.</value>
        [TypeConverter(typeof(CustomEnumConverter<BusinessAccessRole>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum BusinessAccessRole
        {
            
            /// <summary>
            /// Enum OWNEREnum for OWNER
            /// </summary>
            [EnumMember(Value = "OWNER")]
            OWNEREnum = 1,
            
            /// <summary>
            /// Enum ADMINEnum for ADMIN
            /// </summary>
            [EnumMember(Value = "ADMIN")]
            ADMINEnum = 2,
            
            /// <summary>
            /// Enum ANALYSTEnum for ANALYST
            /// </summary>
            [EnumMember(Value = "ANALYST")]
            ANALYSTEnum = 3,
            
            /// <summary>
            /// Enum SOSREADEREnum for SOS_READER
            /// </summary>
            [EnumMember(Value = "SOS_READER")]
            SOSREADEREnum = 4,
            
            /// <summary>
            /// Enum FINANCEMANAGEREnum for FINANCE_MANAGER
            /// </summary>
            [EnumMember(Value = "FINANCE_MANAGER")]
            FINANCEMANAGEREnum = 5,
            
            /// <summary>
            /// Enum AUDIENCEMANAGEREnum for AUDIENCE_MANAGER
            /// </summary>
            [EnumMember(Value = "AUDIENCE_MANAGER")]
            AUDIENCEMANAGEREnum = 6,
            
            /// <summary>
            /// Enum CAMPAIGNMANAGEREnum for CAMPAIGN_MANAGER
            /// </summary>
            [EnumMember(Value = "CAMPAIGN_MANAGER")]
            CAMPAIGNMANAGEREnum = 7,
            
            /// <summary>
            /// Enum CATALOGSMANAGEREnum for CATALOGS_MANAGER
            /// </summary>
            [EnumMember(Value = "CATALOGS_MANAGER")]
            CATALOGSMANAGEREnum = 8,
            
            /// <summary>
            /// Enum RESTRICTEDOWNEREnum for RESTRICTED_OWNER
            /// </summary>
            [EnumMember(Value = "RESTRICTED_OWNER")]
            RESTRICTEDOWNEREnum = 9,
            
            /// <summary>
            /// Enum PROFILEMANAGEREnum for PROFILE_MANAGER
            /// </summary>
            [EnumMember(Value = "PROFILE_MANAGER")]
            PROFILEMANAGEREnum = 10,
            
            /// <summary>
            /// Enum PROFILEPUBLISHEREnum for PROFILE_PUBLISHER
            /// </summary>
            [EnumMember(Value = "PROFILE_PUBLISHER")]
            PROFILEPUBLISHEREnum = 11,
            
            /// <summary>
            /// Enum RESOURCEPINNERLISTOWNEREnum for RESOURCE_PINNER_LIST_OWNER
            /// </summary>
            [EnumMember(Value = "RESOURCE_PINNER_LIST_OWNER")]
            RESOURCEPINNERLISTOWNEREnum = 12,
            
            /// <summary>
            /// Enum RESOURCEPINNERLISTREADEREnum for RESOURCE_PINNER_LIST_READER
            /// </summary>
            [EnumMember(Value = "RESOURCE_PINNER_LIST_READER")]
            RESOURCEPINNERLISTREADEREnum = 13,
            
            /// <summary>
            /// Enum BIZPINNERLISTSHAREREnum for BIZ_PINNER_LIST_SHARER
            /// </summary>
            [EnumMember(Value = "BIZ_PINNER_LIST_SHARER")]
            BIZPINNERLISTSHAREREnum = 14,
            
            /// <summary>
            /// Enum RESOURCECONVERSIONTAGSREADEREnum for RESOURCE_CONVERSION_TAGS_READER
            /// </summary>
            [EnumMember(Value = "RESOURCE_CONVERSION_TAGS_READER")]
            RESOURCECONVERSIONTAGSREADEREnum = 15
        }
}

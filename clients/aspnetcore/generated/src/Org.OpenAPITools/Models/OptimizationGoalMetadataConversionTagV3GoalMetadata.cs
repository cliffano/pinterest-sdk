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
    /// 
    /// </summary>
    [DataContract]
    public partial class OptimizationGoalMetadataConversionTagV3GoalMetadata : IEquatable<OptimizationGoalMetadataConversionTagV3GoalMetadata>
    {
        /// <summary>
        /// Gets or Sets AttributionWindows
        /// </summary>
        [DataMember(Name="attribution_windows", EmitDefaultValue=false)]
        public OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows AttributionWindows { get; set; }


        /// <summary>
        /// Gets or Sets ConversionEvent
        /// </summary>
        [TypeConverter(typeof(CustomEnumConverter<ConversionEventEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum ConversionEventEnum
        {
            
            /// <summary>
            /// Enum PAGEVISITEnum for PAGE_VISIT
            /// </summary>
            [EnumMember(Value = "PAGE_VISIT")]
            PAGEVISITEnum = 1,
            
            /// <summary>
            /// Enum SIGNUPEnum for SIGNUP
            /// </summary>
            [EnumMember(Value = "SIGNUP")]
            SIGNUPEnum = 2,
            
            /// <summary>
            /// Enum CHECKOUTEnum for CHECKOUT
            /// </summary>
            [EnumMember(Value = "CHECKOUT")]
            CHECKOUTEnum = 3,
            
            /// <summary>
            /// Enum CUSTOMEnum for CUSTOM
            /// </summary>
            [EnumMember(Value = "CUSTOM")]
            CUSTOMEnum = 4,
            
            /// <summary>
            /// Enum VIEWCATEGORYEnum for VIEW_CATEGORY
            /// </summary>
            [EnumMember(Value = "VIEW_CATEGORY")]
            VIEWCATEGORYEnum = 5,
            
            /// <summary>
            /// Enum SEARCHEnum for SEARCH
            /// </summary>
            [EnumMember(Value = "SEARCH")]
            SEARCHEnum = 6,
            
            /// <summary>
            /// Enum ADDTOCARTEnum for ADD_TO_CART
            /// </summary>
            [EnumMember(Value = "ADD_TO_CART")]
            ADDTOCARTEnum = 7,
            
            /// <summary>
            /// Enum WATCHVIDEOEnum for WATCH_VIDEO
            /// </summary>
            [EnumMember(Value = "WATCH_VIDEO")]
            WATCHVIDEOEnum = 8,
            
            /// <summary>
            /// Enum LEADEnum for LEAD
            /// </summary>
            [EnumMember(Value = "LEAD")]
            LEADEnum = 9,
            
            /// <summary>
            /// Enum APPINSTALLEnum for APP_INSTALL
            /// </summary>
            [EnumMember(Value = "APP_INSTALL")]
            APPINSTALLEnum = 10
        }

        /// <summary>
        /// Gets or Sets ConversionEvent
        /// </summary>
        [DataMember(Name="conversion_event", EmitDefaultValue=true)]
        public ConversionEventEnum ConversionEvent { get; set; }

        /// <summary>
        /// Gets or Sets ConversionTagId
        /// </summary>
        [RegularExpression("^[0-9]+$")]
        [DataMember(Name="conversion_tag_id", EmitDefaultValue=false)]
        public string ConversionTagId { get; set; }

        /// <summary>
        /// Gets or Sets CpaGoalValueInMicroCurrency
        /// </summary>
        [RegularExpression("^[0-9]+$")]
        [DataMember(Name="cpa_goal_value_in_micro_currency", EmitDefaultValue=false)]
        public string CpaGoalValueInMicroCurrency { get; set; }

        /// <summary>
        /// Ad group is ROAS optimized
        /// </summary>
        /// <value>Ad group is ROAS optimized</value>
        [DataMember(Name="is_roas_optimized", EmitDefaultValue=true)]
        public bool? IsRoasOptimized { get; set; }


        /// <summary>
        /// Conversion learning model type
        /// </summary>
        /// <value>Conversion learning model type</value>
        [TypeConverter(typeof(CustomEnumConverter<LearningModeTypeEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum LearningModeTypeEnum
        {
            
            /// <summary>
            /// Enum NOTACTIVEEnum for NOT_ACTIVE
            /// </summary>
            [EnumMember(Value = "NOT_ACTIVE")]
            NOTACTIVEEnum = 1,
            
            /// <summary>
            /// Enum ACTIVEEnum for ACTIVE
            /// </summary>
            [EnumMember(Value = "ACTIVE")]
            ACTIVEEnum = 2,
            
            /// <summary>
            /// Enum NullEnum for null
            /// </summary>
            [EnumMember(Value = "null")]
            NullEnum = 3
        }

        /// <summary>
        /// Conversion learning model type
        /// </summary>
        /// <value>Conversion learning model type</value>
        /// <example>ACTIVE</example>
        [DataMember(Name="learning_mode_type", EmitDefaultValue=true)]
        public LearningModeTypeEnum? LearningModeType { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OptimizationGoalMetadataConversionTagV3GoalMetadata {\n");
            sb.Append("  AttributionWindows: ").Append(AttributionWindows).Append("\n");
            sb.Append("  ConversionEvent: ").Append(ConversionEvent).Append("\n");
            sb.Append("  ConversionTagId: ").Append(ConversionTagId).Append("\n");
            sb.Append("  CpaGoalValueInMicroCurrency: ").Append(CpaGoalValueInMicroCurrency).Append("\n");
            sb.Append("  IsRoasOptimized: ").Append(IsRoasOptimized).Append("\n");
            sb.Append("  LearningModeType: ").Append(LearningModeType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((OptimizationGoalMetadataConversionTagV3GoalMetadata)obj);
        }

        /// <summary>
        /// Returns true if OptimizationGoalMetadataConversionTagV3GoalMetadata instances are equal
        /// </summary>
        /// <param name="other">Instance of OptimizationGoalMetadataConversionTagV3GoalMetadata to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OptimizationGoalMetadataConversionTagV3GoalMetadata other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    AttributionWindows == other.AttributionWindows ||
                    AttributionWindows != null &&
                    AttributionWindows.Equals(other.AttributionWindows)
                ) && 
                (
                    ConversionEvent == other.ConversionEvent ||
                    
                    ConversionEvent.Equals(other.ConversionEvent)
                ) && 
                (
                    ConversionTagId == other.ConversionTagId ||
                    ConversionTagId != null &&
                    ConversionTagId.Equals(other.ConversionTagId)
                ) && 
                (
                    CpaGoalValueInMicroCurrency == other.CpaGoalValueInMicroCurrency ||
                    CpaGoalValueInMicroCurrency != null &&
                    CpaGoalValueInMicroCurrency.Equals(other.CpaGoalValueInMicroCurrency)
                ) && 
                (
                    IsRoasOptimized == other.IsRoasOptimized ||
                    IsRoasOptimized != null &&
                    IsRoasOptimized.Equals(other.IsRoasOptimized)
                ) && 
                (
                    LearningModeType == other.LearningModeType ||
                    
                    LearningModeType.Equals(other.LearningModeType)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (AttributionWindows != null)
                    hashCode = hashCode * 59 + AttributionWindows.GetHashCode();
                    
                    hashCode = hashCode * 59 + ConversionEvent.GetHashCode();
                    if (ConversionTagId != null)
                    hashCode = hashCode * 59 + ConversionTagId.GetHashCode();
                    if (CpaGoalValueInMicroCurrency != null)
                    hashCode = hashCode * 59 + CpaGoalValueInMicroCurrency.GetHashCode();
                    if (IsRoasOptimized != null)
                    hashCode = hashCode * 59 + IsRoasOptimized.GetHashCode();
                    
                    hashCode = hashCode * 59 + LearningModeType.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(OptimizationGoalMetadataConversionTagV3GoalMetadata left, OptimizationGoalMetadataConversionTagV3GoalMetadata right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(OptimizationGoalMetadataConversionTagV3GoalMetadata left, OptimizationGoalMetadataConversionTagV3GoalMetadata right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
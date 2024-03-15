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
    public partial class AdsCreditDiscountsResponse : IEquatable<AdsCreditDiscountsResponse>
    {
        /// <summary>
        /// True if the offer code is currently active.
        /// </summary>
        /// <value>True if the offer code is currently active.</value>
        /// <example>true</example>
        [DataMember(Name="active", EmitDefaultValue=true)]
        public bool Active { get; set; }

        /// <summary>
        /// Advertiser ID the offer was applied to.
        /// </summary>
        /// <value>Advertiser ID the offer was applied to.</value>
        /// <example>12312451231</example>
        [RegularExpression("^\\d+$")]
        [DataMember(Name="advertiser_id", EmitDefaultValue=false)]
        public string AdvertiserId { get; set; }


        /// <summary>
        /// The type of discount of this credit
        /// </summary>
        /// <value>The type of discount of this credit</value>
        [TypeConverter(typeof(CustomEnumConverter<DiscountTypeEnum>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum DiscountTypeEnum
        {
            
            /// <summary>
            /// Enum COUPONEnum for COUPON
            /// </summary>
            [EnumMember(Value = "COUPON")]
            COUPONEnum = 1,
            
            /// <summary>
            /// Enum CREDITEnum for CREDIT
            /// </summary>
            [EnumMember(Value = "CREDIT")]
            CREDITEnum = 2,
            
            /// <summary>
            /// Enum COUPONAPPLIEDEnum for COUPON_APPLIED
            /// </summary>
            [EnumMember(Value = "COUPON_APPLIED")]
            COUPONAPPLIEDEnum = 3,
            
            /// <summary>
            /// Enum CREDITAPPLIEDEnum for CREDIT_APPLIED
            /// </summary>
            [EnumMember(Value = "CREDIT_APPLIED")]
            CREDITAPPLIEDEnum = 4,
            
            /// <summary>
            /// Enum MARKETINGOFFERCREDITEnum for MARKETING_OFFER_CREDIT
            /// </summary>
            [EnumMember(Value = "MARKETING_OFFER_CREDIT")]
            MARKETINGOFFERCREDITEnum = 5,
            
            /// <summary>
            /// Enum MARKETINGOFFERCREDITAPPLIEDEnum for MARKETING_OFFER_CREDIT_APPLIED
            /// </summary>
            [EnumMember(Value = "MARKETING_OFFER_CREDIT_APPLIED")]
            MARKETINGOFFERCREDITAPPLIEDEnum = 6,
            
            /// <summary>
            /// Enum GOODWILLCREDITEnum for GOODWILL_CREDIT
            /// </summary>
            [EnumMember(Value = "GOODWILL_CREDIT")]
            GOODWILLCREDITEnum = 7,
            
            /// <summary>
            /// Enum GOODWILLCREDITAPPLIEDEnum for GOODWILL_CREDIT_APPLIED
            /// </summary>
            [EnumMember(Value = "GOODWILL_CREDIT_APPLIED")]
            GOODWILLCREDITAPPLIEDEnum = 8,
            
            /// <summary>
            /// Enum INTERNALCREDITEnum for INTERNAL_CREDIT
            /// </summary>
            [EnumMember(Value = "INTERNAL_CREDIT")]
            INTERNALCREDITEnum = 9,
            
            /// <summary>
            /// Enum INTERNALCREDITAPPLIEDEnum for INTERNAL_CREDIT_APPLIED
            /// </summary>
            [EnumMember(Value = "INTERNAL_CREDIT_APPLIED")]
            INTERNALCREDITAPPLIEDEnum = 10,
            
            /// <summary>
            /// Enum PREPAIDCREDITEnum for PREPAID_CREDIT
            /// </summary>
            [EnumMember(Value = "PREPAID_CREDIT")]
            PREPAIDCREDITEnum = 11,
            
            /// <summary>
            /// Enum PREPAIDCREDITAPPLIEDEnum for PREPAID_CREDIT_APPLIED
            /// </summary>
            [EnumMember(Value = "PREPAID_CREDIT_APPLIED")]
            PREPAIDCREDITAPPLIEDEnum = 12,
            
            /// <summary>
            /// Enum SALESINCENTIVECREDITEnum for SALES_INCENTIVE_CREDIT
            /// </summary>
            [EnumMember(Value = "SALES_INCENTIVE_CREDIT")]
            SALESINCENTIVECREDITEnum = 13,
            
            /// <summary>
            /// Enum SALESINCENTIVECREDITAPPLIEDEnum for SALES_INCENTIVE_CREDIT_APPLIED
            /// </summary>
            [EnumMember(Value = "SALES_INCENTIVE_CREDIT_APPLIED")]
            SALESINCENTIVECREDITAPPLIEDEnum = 14,
            
            /// <summary>
            /// Enum CREDITEXPIREDEnum for CREDIT_EXPIRED
            /// </summary>
            [EnumMember(Value = "CREDIT_EXPIRED")]
            CREDITEXPIREDEnum = 15,
            
            /// <summary>
            /// Enum FUTURECREDITEnum for FUTURE_CREDIT
            /// </summary>
            [EnumMember(Value = "FUTURE_CREDIT")]
            FUTURECREDITEnum = 16,
            
            /// <summary>
            /// Enum REFERRALCREDITEnum for REFERRAL_CREDIT
            /// </summary>
            [EnumMember(Value = "REFERRAL_CREDIT")]
            REFERRALCREDITEnum = 17,
            
            /// <summary>
            /// Enum INVOICESALESINCENTIVECREDITEnum for INVOICE_SALES_INCENTIVE_CREDIT
            /// </summary>
            [EnumMember(Value = "INVOICE_SALES_INCENTIVE_CREDIT")]
            INVOICESALESINCENTIVECREDITEnum = 18,
            
            /// <summary>
            /// Enum INVOICESALESINCENTIVECREDITAPPLIEDEnum for INVOICE_SALES_INCENTIVE_CREDIT_APPLIED
            /// </summary>
            [EnumMember(Value = "INVOICE_SALES_INCENTIVE_CREDIT_APPLIED")]
            INVOICESALESINCENTIVECREDITAPPLIEDEnum = 19,
            
            /// <summary>
            /// Enum PREPAIDCREDITREFUNDEnum for PREPAID_CREDIT_REFUND
            /// </summary>
            [EnumMember(Value = "PREPAID_CREDIT_REFUND")]
            PREPAIDCREDITREFUNDEnum = 20,
            
            /// <summary>
            /// Enum NullEnum for null
            /// </summary>
            [EnumMember(Value = "null")]
            NullEnum = 21
        }

        /// <summary>
        /// The type of discount of this credit
        /// </summary>
        /// <value>The type of discount of this credit</value>
        [DataMember(Name="discountType", EmitDefaultValue=true)]
        public DiscountTypeEnum? DiscountType { get; set; }

        /// <summary>
        /// The discount applied in the offer’s currency value.
        /// </summary>
        /// <value>The discount applied in the offer’s currency value.</value>
        /// <example>125000000</example>
        [DataMember(Name="discountInMicroCurrency", EmitDefaultValue=true)]
        public decimal? DiscountInMicroCurrency { get; set; }

        /// <summary>
        /// Currency value for the discount.
        /// </summary>
        /// <value>Currency value for the discount.</value>
        /// <example>USD</example>
        [DataMember(Name="discountCurrency", EmitDefaultValue=true)]
        public string DiscountCurrency { get; set; }

        /// <summary>
        /// Human readable title of the offer code.
        /// </summary>
        /// <value>Human readable title of the offer code.</value>
        /// <example>Ads Credits</example>
        [DataMember(Name="title", EmitDefaultValue=true)]
        public string Title { get; set; }

        /// <summary>
        /// The credits left to spend.
        /// </summary>
        /// <value>The credits left to spend.</value>
        /// <example>125000000</example>
        [DataMember(Name="remainingDiscountInMicroCurrency", EmitDefaultValue=true)]
        public decimal? RemainingDiscountInMicroCurrency { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class AdsCreditDiscountsResponse {\n");
            sb.Append("  Active: ").Append(Active).Append("\n");
            sb.Append("  AdvertiserId: ").Append(AdvertiserId).Append("\n");
            sb.Append("  DiscountType: ").Append(DiscountType).Append("\n");
            sb.Append("  DiscountInMicroCurrency: ").Append(DiscountInMicroCurrency).Append("\n");
            sb.Append("  DiscountCurrency: ").Append(DiscountCurrency).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  RemainingDiscountInMicroCurrency: ").Append(RemainingDiscountInMicroCurrency).Append("\n");
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
            return obj.GetType() == GetType() && Equals((AdsCreditDiscountsResponse)obj);
        }

        /// <summary>
        /// Returns true if AdsCreditDiscountsResponse instances are equal
        /// </summary>
        /// <param name="other">Instance of AdsCreditDiscountsResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(AdsCreditDiscountsResponse other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Active == other.Active ||
                    
                    Active.Equals(other.Active)
                ) && 
                (
                    AdvertiserId == other.AdvertiserId ||
                    AdvertiserId != null &&
                    AdvertiserId.Equals(other.AdvertiserId)
                ) && 
                (
                    DiscountType == other.DiscountType ||
                    
                    DiscountType.Equals(other.DiscountType)
                ) && 
                (
                    DiscountInMicroCurrency == other.DiscountInMicroCurrency ||
                    DiscountInMicroCurrency != null &&
                    DiscountInMicroCurrency.Equals(other.DiscountInMicroCurrency)
                ) && 
                (
                    DiscountCurrency == other.DiscountCurrency ||
                    DiscountCurrency != null &&
                    DiscountCurrency.Equals(other.DiscountCurrency)
                ) && 
                (
                    Title == other.Title ||
                    Title != null &&
                    Title.Equals(other.Title)
                ) && 
                (
                    RemainingDiscountInMicroCurrency == other.RemainingDiscountInMicroCurrency ||
                    RemainingDiscountInMicroCurrency != null &&
                    RemainingDiscountInMicroCurrency.Equals(other.RemainingDiscountInMicroCurrency)
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
                    
                    hashCode = hashCode * 59 + Active.GetHashCode();
                    if (AdvertiserId != null)
                    hashCode = hashCode * 59 + AdvertiserId.GetHashCode();
                    
                    hashCode = hashCode * 59 + DiscountType.GetHashCode();
                    if (DiscountInMicroCurrency != null)
                    hashCode = hashCode * 59 + DiscountInMicroCurrency.GetHashCode();
                    if (DiscountCurrency != null)
                    hashCode = hashCode * 59 + DiscountCurrency.GetHashCode();
                    if (Title != null)
                    hashCode = hashCode * 59 + Title.GetHashCode();
                    if (RemainingDiscountInMicroCurrency != null)
                    hashCode = hashCode * 59 + RemainingDiscountInMicroCurrency.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(AdsCreditDiscountsResponse left, AdsCreditDiscountsResponse right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(AdsCreditDiscountsResponse left, AdsCreditDiscountsResponse right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
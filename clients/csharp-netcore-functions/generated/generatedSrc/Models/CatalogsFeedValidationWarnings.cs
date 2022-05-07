/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Runtime.Serialization;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using Newtonsoft.Json.Linq;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Models
{
    /// <summary>
    /// CatalogsFeedValidationWarnings
    /// </summary>
    [DataContract(Name = "CatalogsFeedValidationWarnings")]
    public partial class CatalogsFeedValidationWarnings : IEquatable<CatalogsFeedValidationWarnings>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedValidationWarnings" /> class.
        /// </summary>
        /// <param name="titleLengthTooLong">titleLengthTooLong.</param>
        /// <param name="descriptionLengthTooLong">descriptionLengthTooLong.</param>
        /// <param name="genderInvalid">genderInvalid.</param>
        /// <param name="ageGroupInvalid">ageGroupInvalid.</param>
        /// <param name="sizeTypeInvalid">sizeTypeInvalid.</param>
        /// <param name="linkFormatWarning">linkFormatWarning.</param>
        /// <param name="duplicateProducts">duplicateProducts.</param>
        /// <param name="duplicateLinks">duplicateLinks.</param>
        /// <param name="salesPriceInvalid">salesPriceInvalid.</param>
        /// <param name="productCategoryDepthWarning">productCategoryDepthWarning.</param>
        /// <param name="adwordsSameAsLink">adwordsSameAsLink.</param>
        /// <param name="duplicateHeaders">duplicateHeaders.</param>
        /// <param name="fetchSameSignature">fetchSameSignature.</param>
        /// <param name="adwordsFormatWarning">adwordsFormatWarning.</param>
        /// <param name="additionalImageLinkWarning">additionalImageLinkWarning.</param>
        /// <param name="imageLinkWarning">imageLinkWarning.</param>
        /// <param name="shippingInvalid">shippingInvalid.</param>
        /// <param name="taxInvalid">taxInvalid.</param>
        /// <param name="shippingWeightInvalid">shippingWeightInvalid.</param>
        /// <param name="expirationDateInvalid">expirationDateInvalid.</param>
        /// <param name="availabilityDateInvalid">availabilityDateInvalid.</param>
        /// <param name="saleDateInvalid">saleDateInvalid.</param>
        /// <param name="weightUnitInvalid">weightUnitInvalid.</param>
        /// <param name="isBundleInvalid">isBundleInvalid.</param>
        /// <param name="updatedTimeInvalid">updatedTimeInvalid.</param>
        /// <param name="customLabelLengthTooLong">customLabelLengthTooLong.</param>
        /// <param name="productTypeLengthTooLong">productTypeLengthTooLong.</param>
        /// <param name="tooManyAdditionalImageLinks">tooManyAdditionalImageLinks.</param>
        /// <param name="multipackInvalid">multipackInvalid.</param>
        /// <param name="indexedProductCountLargeDelta">indexedProductCountLargeDelta.</param>
        /// <param name="itemAdditionalImageDownloadFailure">itemAdditionalImageDownloadFailure.</param>
        /// <param name="optionalProductCategoryMissing">optionalProductCategoryMissing.</param>
        /// <param name="optionalProductCategoryInvalid">optionalProductCategoryInvalid.</param>
        /// <param name="optionalConditionMissing">optionalConditionMissing.</param>
        /// <param name="optionalConditionInvalid">optionalConditionInvalid.</param>
        /// <param name="iosDeepLinkInvalid">iosDeepLinkInvalid.</param>
        /// <param name="androidDeepLinkInvalid">androidDeepLinkInvalid.</param>
        /// <param name="availabilityNormalized">availabilityNormalized.</param>
        /// <param name="conditionNormalized">conditionNormalized.</param>
        /// <param name="genderNormalized">genderNormalized.</param>
        /// <param name="sizeTypeNormalized">sizeTypeNormalized.</param>
        /// <param name="ageGroupNormalized">ageGroupNormalized.</param>
        /// <param name="utmSourceAutoCorrected">utmSourceAutoCorrected.</param>
        /// <param name="countryDoesNotMapToCurrency">countryDoesNotMapToCurrency.</param>
        /// <param name="minAdPriceInvalid">minAdPriceInvalid.</param>
        public CatalogsFeedValidationWarnings(int titleLengthTooLong = default(int), int descriptionLengthTooLong = default(int), int genderInvalid = default(int), int ageGroupInvalid = default(int), int sizeTypeInvalid = default(int), int linkFormatWarning = default(int), int duplicateProducts = default(int), int duplicateLinks = default(int), int salesPriceInvalid = default(int), int productCategoryDepthWarning = default(int), int adwordsSameAsLink = default(int), int duplicateHeaders = default(int), int fetchSameSignature = default(int), int adwordsFormatWarning = default(int), int additionalImageLinkWarning = default(int), int imageLinkWarning = default(int), int shippingInvalid = default(int), int taxInvalid = default(int), int shippingWeightInvalid = default(int), int expirationDateInvalid = default(int), int availabilityDateInvalid = default(int), int saleDateInvalid = default(int), int weightUnitInvalid = default(int), int isBundleInvalid = default(int), int updatedTimeInvalid = default(int), int customLabelLengthTooLong = default(int), int productTypeLengthTooLong = default(int), int tooManyAdditionalImageLinks = default(int), int multipackInvalid = default(int), int indexedProductCountLargeDelta = default(int), int itemAdditionalImageDownloadFailure = default(int), int optionalProductCategoryMissing = default(int), int optionalProductCategoryInvalid = default(int), int optionalConditionMissing = default(int), int optionalConditionInvalid = default(int), int iosDeepLinkInvalid = default(int), int androidDeepLinkInvalid = default(int), int availabilityNormalized = default(int), int conditionNormalized = default(int), int genderNormalized = default(int), int sizeTypeNormalized = default(int), int ageGroupNormalized = default(int), int utmSourceAutoCorrected = default(int), int countryDoesNotMapToCurrency = default(int), int minAdPriceInvalid = default(int))
        {
            this.TitleLengthTooLong = titleLengthTooLong;
            this.DescriptionLengthTooLong = descriptionLengthTooLong;
            this.GenderInvalid = genderInvalid;
            this.AgeGroupInvalid = ageGroupInvalid;
            this.SizeTypeInvalid = sizeTypeInvalid;
            this.LinkFormatWarning = linkFormatWarning;
            this.DuplicateProducts = duplicateProducts;
            this.DuplicateLinks = duplicateLinks;
            this.SalesPriceInvalid = salesPriceInvalid;
            this.ProductCategoryDepthWarning = productCategoryDepthWarning;
            this.AdwordsSameAsLink = adwordsSameAsLink;
            this.DuplicateHeaders = duplicateHeaders;
            this.FetchSameSignature = fetchSameSignature;
            this.AdwordsFormatWarning = adwordsFormatWarning;
            this.AdditionalImageLinkWarning = additionalImageLinkWarning;
            this.ImageLinkWarning = imageLinkWarning;
            this.ShippingInvalid = shippingInvalid;
            this.TaxInvalid = taxInvalid;
            this.ShippingWeightInvalid = shippingWeightInvalid;
            this.ExpirationDateInvalid = expirationDateInvalid;
            this.AvailabilityDateInvalid = availabilityDateInvalid;
            this.SaleDateInvalid = saleDateInvalid;
            this.WeightUnitInvalid = weightUnitInvalid;
            this.IsBundleInvalid = isBundleInvalid;
            this.UpdatedTimeInvalid = updatedTimeInvalid;
            this.CustomLabelLengthTooLong = customLabelLengthTooLong;
            this.ProductTypeLengthTooLong = productTypeLengthTooLong;
            this.TooManyAdditionalImageLinks = tooManyAdditionalImageLinks;
            this.MultipackInvalid = multipackInvalid;
            this.IndexedProductCountLargeDelta = indexedProductCountLargeDelta;
            this.ItemAdditionalImageDownloadFailure = itemAdditionalImageDownloadFailure;
            this.OptionalProductCategoryMissing = optionalProductCategoryMissing;
            this.OptionalProductCategoryInvalid = optionalProductCategoryInvalid;
            this.OptionalConditionMissing = optionalConditionMissing;
            this.OptionalConditionInvalid = optionalConditionInvalid;
            this.IosDeepLinkInvalid = iosDeepLinkInvalid;
            this.AndroidDeepLinkInvalid = androidDeepLinkInvalid;
            this.AvailabilityNormalized = availabilityNormalized;
            this.ConditionNormalized = conditionNormalized;
            this.GenderNormalized = genderNormalized;
            this.SizeTypeNormalized = sizeTypeNormalized;
            this.AgeGroupNormalized = ageGroupNormalized;
            this.UtmSourceAutoCorrected = utmSourceAutoCorrected;
            this.CountryDoesNotMapToCurrency = countryDoesNotMapToCurrency;
            this.MinAdPriceInvalid = minAdPriceInvalid;
        }

        /// <summary>
        /// Gets or Sets TitleLengthTooLong
        /// </summary>
        [DataMember(Name = "title_length_too_long", EmitDefaultValue = false)]
        public int TitleLengthTooLong { get; set; }

        /// <summary>
        /// Gets or Sets DescriptionLengthTooLong
        /// </summary>
        [DataMember(Name = "description_length_too_long", EmitDefaultValue = false)]
        public int DescriptionLengthTooLong { get; set; }

        /// <summary>
        /// Gets or Sets GenderInvalid
        /// </summary>
        [DataMember(Name = "gender_invalid", EmitDefaultValue = false)]
        public int GenderInvalid { get; set; }

        /// <summary>
        /// Gets or Sets AgeGroupInvalid
        /// </summary>
        [DataMember(Name = "age_group_invalid", EmitDefaultValue = false)]
        public int AgeGroupInvalid { get; set; }

        /// <summary>
        /// Gets or Sets SizeTypeInvalid
        /// </summary>
        [DataMember(Name = "size_type_invalid", EmitDefaultValue = false)]
        public int SizeTypeInvalid { get; set; }

        /// <summary>
        /// Gets or Sets LinkFormatWarning
        /// </summary>
        [DataMember(Name = "link_format_warning", EmitDefaultValue = false)]
        public int LinkFormatWarning { get; set; }

        /// <summary>
        /// Gets or Sets DuplicateProducts
        /// </summary>
        [DataMember(Name = "duplicate_products", EmitDefaultValue = false)]
        public int DuplicateProducts { get; set; }

        /// <summary>
        /// Gets or Sets DuplicateLinks
        /// </summary>
        [DataMember(Name = "duplicate_links", EmitDefaultValue = false)]
        public int DuplicateLinks { get; set; }

        /// <summary>
        /// Gets or Sets SalesPriceInvalid
        /// </summary>
        [DataMember(Name = "sales_price_invalid", EmitDefaultValue = false)]
        public int SalesPriceInvalid { get; set; }

        /// <summary>
        /// Gets or Sets ProductCategoryDepthWarning
        /// </summary>
        [DataMember(Name = "product_category_depth_warning", EmitDefaultValue = false)]
        public int ProductCategoryDepthWarning { get; set; }

        /// <summary>
        /// Gets or Sets AdwordsSameAsLink
        /// </summary>
        [DataMember(Name = "adwords_same_as_link", EmitDefaultValue = false)]
        public int AdwordsSameAsLink { get; set; }

        /// <summary>
        /// Gets or Sets DuplicateHeaders
        /// </summary>
        [DataMember(Name = "duplicate_headers", EmitDefaultValue = false)]
        public int DuplicateHeaders { get; set; }

        /// <summary>
        /// Gets or Sets FetchSameSignature
        /// </summary>
        [DataMember(Name = "fetch_same_signature", EmitDefaultValue = false)]
        public int FetchSameSignature { get; set; }

        /// <summary>
        /// Gets or Sets AdwordsFormatWarning
        /// </summary>
        [DataMember(Name = "adwords_format_warning", EmitDefaultValue = false)]
        public int AdwordsFormatWarning { get; set; }

        /// <summary>
        /// Gets or Sets AdditionalImageLinkWarning
        /// </summary>
        [DataMember(Name = "additional_image_link_warning", EmitDefaultValue = false)]
        public int AdditionalImageLinkWarning { get; set; }

        /// <summary>
        /// Gets or Sets ImageLinkWarning
        /// </summary>
        [DataMember(Name = "image_link_warning", EmitDefaultValue = false)]
        public int ImageLinkWarning { get; set; }

        /// <summary>
        /// Gets or Sets ShippingInvalid
        /// </summary>
        [DataMember(Name = "shipping_invalid", EmitDefaultValue = false)]
        public int ShippingInvalid { get; set; }

        /// <summary>
        /// Gets or Sets TaxInvalid
        /// </summary>
        [DataMember(Name = "tax_invalid", EmitDefaultValue = false)]
        public int TaxInvalid { get; set; }

        /// <summary>
        /// Gets or Sets ShippingWeightInvalid
        /// </summary>
        [DataMember(Name = "shipping_weight_invalid", EmitDefaultValue = false)]
        public int ShippingWeightInvalid { get; set; }

        /// <summary>
        /// Gets or Sets ExpirationDateInvalid
        /// </summary>
        [DataMember(Name = "expiration_date_invalid", EmitDefaultValue = false)]
        public int ExpirationDateInvalid { get; set; }

        /// <summary>
        /// Gets or Sets AvailabilityDateInvalid
        /// </summary>
        [DataMember(Name = "availability_date_invalid", EmitDefaultValue = false)]
        public int AvailabilityDateInvalid { get; set; }

        /// <summary>
        /// Gets or Sets SaleDateInvalid
        /// </summary>
        [DataMember(Name = "sale_date_invalid", EmitDefaultValue = false)]
        public int SaleDateInvalid { get; set; }

        /// <summary>
        /// Gets or Sets WeightUnitInvalid
        /// </summary>
        [DataMember(Name = "weight_unit_invalid", EmitDefaultValue = false)]
        public int WeightUnitInvalid { get; set; }

        /// <summary>
        /// Gets or Sets IsBundleInvalid
        /// </summary>
        [DataMember(Name = "is_bundle_invalid", EmitDefaultValue = false)]
        public int IsBundleInvalid { get; set; }

        /// <summary>
        /// Gets or Sets UpdatedTimeInvalid
        /// </summary>
        [DataMember(Name = "updated_time_invalid", EmitDefaultValue = false)]
        public int UpdatedTimeInvalid { get; set; }

        /// <summary>
        /// Gets or Sets CustomLabelLengthTooLong
        /// </summary>
        [DataMember(Name = "custom_label_length_too_long", EmitDefaultValue = false)]
        public int CustomLabelLengthTooLong { get; set; }

        /// <summary>
        /// Gets or Sets ProductTypeLengthTooLong
        /// </summary>
        [DataMember(Name = "product_type_length_too_long", EmitDefaultValue = false)]
        public int ProductTypeLengthTooLong { get; set; }

        /// <summary>
        /// Gets or Sets TooManyAdditionalImageLinks
        /// </summary>
        [DataMember(Name = "too_many_additional_image_links", EmitDefaultValue = false)]
        public int TooManyAdditionalImageLinks { get; set; }

        /// <summary>
        /// Gets or Sets MultipackInvalid
        /// </summary>
        [DataMember(Name = "multipack_invalid", EmitDefaultValue = false)]
        public int MultipackInvalid { get; set; }

        /// <summary>
        /// Gets or Sets IndexedProductCountLargeDelta
        /// </summary>
        [DataMember(Name = "indexed_product_count_large_delta", EmitDefaultValue = false)]
        public int IndexedProductCountLargeDelta { get; set; }

        /// <summary>
        /// Gets or Sets ItemAdditionalImageDownloadFailure
        /// </summary>
        [DataMember(Name = "item_additional_image_download_failure", EmitDefaultValue = false)]
        public int ItemAdditionalImageDownloadFailure { get; set; }

        /// <summary>
        /// Gets or Sets OptionalProductCategoryMissing
        /// </summary>
        [DataMember(Name = "optional_product_category_missing", EmitDefaultValue = false)]
        public int OptionalProductCategoryMissing { get; set; }

        /// <summary>
        /// Gets or Sets OptionalProductCategoryInvalid
        /// </summary>
        [DataMember(Name = "optional_product_category_invalid", EmitDefaultValue = false)]
        public int OptionalProductCategoryInvalid { get; set; }

        /// <summary>
        /// Gets or Sets OptionalConditionMissing
        /// </summary>
        [DataMember(Name = "optional_condition_missing", EmitDefaultValue = false)]
        public int OptionalConditionMissing { get; set; }

        /// <summary>
        /// Gets or Sets OptionalConditionInvalid
        /// </summary>
        [DataMember(Name = "optional_condition_invalid", EmitDefaultValue = false)]
        public int OptionalConditionInvalid { get; set; }

        /// <summary>
        /// Gets or Sets IosDeepLinkInvalid
        /// </summary>
        [DataMember(Name = "ios_deep_link_invalid", EmitDefaultValue = false)]
        public int IosDeepLinkInvalid { get; set; }

        /// <summary>
        /// Gets or Sets AndroidDeepLinkInvalid
        /// </summary>
        [DataMember(Name = "android_deep_link_invalid", EmitDefaultValue = false)]
        public int AndroidDeepLinkInvalid { get; set; }

        /// <summary>
        /// Gets or Sets AvailabilityNormalized
        /// </summary>
        [DataMember(Name = "availability_normalized", EmitDefaultValue = false)]
        public int AvailabilityNormalized { get; set; }

        /// <summary>
        /// Gets or Sets ConditionNormalized
        /// </summary>
        [DataMember(Name = "condition_normalized", EmitDefaultValue = false)]
        public int ConditionNormalized { get; set; }

        /// <summary>
        /// Gets or Sets GenderNormalized
        /// </summary>
        [DataMember(Name = "gender_normalized", EmitDefaultValue = false)]
        public int GenderNormalized { get; set; }

        /// <summary>
        /// Gets or Sets SizeTypeNormalized
        /// </summary>
        [DataMember(Name = "size_type_normalized", EmitDefaultValue = false)]
        public int SizeTypeNormalized { get; set; }

        /// <summary>
        /// Gets or Sets AgeGroupNormalized
        /// </summary>
        [DataMember(Name = "age_group_normalized", EmitDefaultValue = false)]
        public int AgeGroupNormalized { get; set; }

        /// <summary>
        /// Gets or Sets UtmSourceAutoCorrected
        /// </summary>
        [DataMember(Name = "utm_source_auto_corrected", EmitDefaultValue = false)]
        public int UtmSourceAutoCorrected { get; set; }

        /// <summary>
        /// Gets or Sets CountryDoesNotMapToCurrency
        /// </summary>
        [DataMember(Name = "country_does_not_map_to_currency", EmitDefaultValue = false)]
        public int CountryDoesNotMapToCurrency { get; set; }

        /// <summary>
        /// Gets or Sets MinAdPriceInvalid
        /// </summary>
        [DataMember(Name = "min_ad_price_invalid", EmitDefaultValue = false)]
        public int MinAdPriceInvalid { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CatalogsFeedValidationWarnings {\n");
            sb.Append("  TitleLengthTooLong: ").Append(TitleLengthTooLong).Append("\n");
            sb.Append("  DescriptionLengthTooLong: ").Append(DescriptionLengthTooLong).Append("\n");
            sb.Append("  GenderInvalid: ").Append(GenderInvalid).Append("\n");
            sb.Append("  AgeGroupInvalid: ").Append(AgeGroupInvalid).Append("\n");
            sb.Append("  SizeTypeInvalid: ").Append(SizeTypeInvalid).Append("\n");
            sb.Append("  LinkFormatWarning: ").Append(LinkFormatWarning).Append("\n");
            sb.Append("  DuplicateProducts: ").Append(DuplicateProducts).Append("\n");
            sb.Append("  DuplicateLinks: ").Append(DuplicateLinks).Append("\n");
            sb.Append("  SalesPriceInvalid: ").Append(SalesPriceInvalid).Append("\n");
            sb.Append("  ProductCategoryDepthWarning: ").Append(ProductCategoryDepthWarning).Append("\n");
            sb.Append("  AdwordsSameAsLink: ").Append(AdwordsSameAsLink).Append("\n");
            sb.Append("  DuplicateHeaders: ").Append(DuplicateHeaders).Append("\n");
            sb.Append("  FetchSameSignature: ").Append(FetchSameSignature).Append("\n");
            sb.Append("  AdwordsFormatWarning: ").Append(AdwordsFormatWarning).Append("\n");
            sb.Append("  AdditionalImageLinkWarning: ").Append(AdditionalImageLinkWarning).Append("\n");
            sb.Append("  ImageLinkWarning: ").Append(ImageLinkWarning).Append("\n");
            sb.Append("  ShippingInvalid: ").Append(ShippingInvalid).Append("\n");
            sb.Append("  TaxInvalid: ").Append(TaxInvalid).Append("\n");
            sb.Append("  ShippingWeightInvalid: ").Append(ShippingWeightInvalid).Append("\n");
            sb.Append("  ExpirationDateInvalid: ").Append(ExpirationDateInvalid).Append("\n");
            sb.Append("  AvailabilityDateInvalid: ").Append(AvailabilityDateInvalid).Append("\n");
            sb.Append("  SaleDateInvalid: ").Append(SaleDateInvalid).Append("\n");
            sb.Append("  WeightUnitInvalid: ").Append(WeightUnitInvalid).Append("\n");
            sb.Append("  IsBundleInvalid: ").Append(IsBundleInvalid).Append("\n");
            sb.Append("  UpdatedTimeInvalid: ").Append(UpdatedTimeInvalid).Append("\n");
            sb.Append("  CustomLabelLengthTooLong: ").Append(CustomLabelLengthTooLong).Append("\n");
            sb.Append("  ProductTypeLengthTooLong: ").Append(ProductTypeLengthTooLong).Append("\n");
            sb.Append("  TooManyAdditionalImageLinks: ").Append(TooManyAdditionalImageLinks).Append("\n");
            sb.Append("  MultipackInvalid: ").Append(MultipackInvalid).Append("\n");
            sb.Append("  IndexedProductCountLargeDelta: ").Append(IndexedProductCountLargeDelta).Append("\n");
            sb.Append("  ItemAdditionalImageDownloadFailure: ").Append(ItemAdditionalImageDownloadFailure).Append("\n");
            sb.Append("  OptionalProductCategoryMissing: ").Append(OptionalProductCategoryMissing).Append("\n");
            sb.Append("  OptionalProductCategoryInvalid: ").Append(OptionalProductCategoryInvalid).Append("\n");
            sb.Append("  OptionalConditionMissing: ").Append(OptionalConditionMissing).Append("\n");
            sb.Append("  OptionalConditionInvalid: ").Append(OptionalConditionInvalid).Append("\n");
            sb.Append("  IosDeepLinkInvalid: ").Append(IosDeepLinkInvalid).Append("\n");
            sb.Append("  AndroidDeepLinkInvalid: ").Append(AndroidDeepLinkInvalid).Append("\n");
            sb.Append("  AvailabilityNormalized: ").Append(AvailabilityNormalized).Append("\n");
            sb.Append("  ConditionNormalized: ").Append(ConditionNormalized).Append("\n");
            sb.Append("  GenderNormalized: ").Append(GenderNormalized).Append("\n");
            sb.Append("  SizeTypeNormalized: ").Append(SizeTypeNormalized).Append("\n");
            sb.Append("  AgeGroupNormalized: ").Append(AgeGroupNormalized).Append("\n");
            sb.Append("  UtmSourceAutoCorrected: ").Append(UtmSourceAutoCorrected).Append("\n");
            sb.Append("  CountryDoesNotMapToCurrency: ").Append(CountryDoesNotMapToCurrency).Append("\n");
            sb.Append("  MinAdPriceInvalid: ").Append(MinAdPriceInvalid).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as CatalogsFeedValidationWarnings);
        }

        /// <summary>
        /// Returns true if CatalogsFeedValidationWarnings instances are equal
        /// </summary>
        /// <param name="input">Instance of CatalogsFeedValidationWarnings to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CatalogsFeedValidationWarnings input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.TitleLengthTooLong == input.TitleLengthTooLong ||
                    this.TitleLengthTooLong.Equals(input.TitleLengthTooLong)
                ) && 
                (
                    this.DescriptionLengthTooLong == input.DescriptionLengthTooLong ||
                    this.DescriptionLengthTooLong.Equals(input.DescriptionLengthTooLong)
                ) && 
                (
                    this.GenderInvalid == input.GenderInvalid ||
                    this.GenderInvalid.Equals(input.GenderInvalid)
                ) && 
                (
                    this.AgeGroupInvalid == input.AgeGroupInvalid ||
                    this.AgeGroupInvalid.Equals(input.AgeGroupInvalid)
                ) && 
                (
                    this.SizeTypeInvalid == input.SizeTypeInvalid ||
                    this.SizeTypeInvalid.Equals(input.SizeTypeInvalid)
                ) && 
                (
                    this.LinkFormatWarning == input.LinkFormatWarning ||
                    this.LinkFormatWarning.Equals(input.LinkFormatWarning)
                ) && 
                (
                    this.DuplicateProducts == input.DuplicateProducts ||
                    this.DuplicateProducts.Equals(input.DuplicateProducts)
                ) && 
                (
                    this.DuplicateLinks == input.DuplicateLinks ||
                    this.DuplicateLinks.Equals(input.DuplicateLinks)
                ) && 
                (
                    this.SalesPriceInvalid == input.SalesPriceInvalid ||
                    this.SalesPriceInvalid.Equals(input.SalesPriceInvalid)
                ) && 
                (
                    this.ProductCategoryDepthWarning == input.ProductCategoryDepthWarning ||
                    this.ProductCategoryDepthWarning.Equals(input.ProductCategoryDepthWarning)
                ) && 
                (
                    this.AdwordsSameAsLink == input.AdwordsSameAsLink ||
                    this.AdwordsSameAsLink.Equals(input.AdwordsSameAsLink)
                ) && 
                (
                    this.DuplicateHeaders == input.DuplicateHeaders ||
                    this.DuplicateHeaders.Equals(input.DuplicateHeaders)
                ) && 
                (
                    this.FetchSameSignature == input.FetchSameSignature ||
                    this.FetchSameSignature.Equals(input.FetchSameSignature)
                ) && 
                (
                    this.AdwordsFormatWarning == input.AdwordsFormatWarning ||
                    this.AdwordsFormatWarning.Equals(input.AdwordsFormatWarning)
                ) && 
                (
                    this.AdditionalImageLinkWarning == input.AdditionalImageLinkWarning ||
                    this.AdditionalImageLinkWarning.Equals(input.AdditionalImageLinkWarning)
                ) && 
                (
                    this.ImageLinkWarning == input.ImageLinkWarning ||
                    this.ImageLinkWarning.Equals(input.ImageLinkWarning)
                ) && 
                (
                    this.ShippingInvalid == input.ShippingInvalid ||
                    this.ShippingInvalid.Equals(input.ShippingInvalid)
                ) && 
                (
                    this.TaxInvalid == input.TaxInvalid ||
                    this.TaxInvalid.Equals(input.TaxInvalid)
                ) && 
                (
                    this.ShippingWeightInvalid == input.ShippingWeightInvalid ||
                    this.ShippingWeightInvalid.Equals(input.ShippingWeightInvalid)
                ) && 
                (
                    this.ExpirationDateInvalid == input.ExpirationDateInvalid ||
                    this.ExpirationDateInvalid.Equals(input.ExpirationDateInvalid)
                ) && 
                (
                    this.AvailabilityDateInvalid == input.AvailabilityDateInvalid ||
                    this.AvailabilityDateInvalid.Equals(input.AvailabilityDateInvalid)
                ) && 
                (
                    this.SaleDateInvalid == input.SaleDateInvalid ||
                    this.SaleDateInvalid.Equals(input.SaleDateInvalid)
                ) && 
                (
                    this.WeightUnitInvalid == input.WeightUnitInvalid ||
                    this.WeightUnitInvalid.Equals(input.WeightUnitInvalid)
                ) && 
                (
                    this.IsBundleInvalid == input.IsBundleInvalid ||
                    this.IsBundleInvalid.Equals(input.IsBundleInvalid)
                ) && 
                (
                    this.UpdatedTimeInvalid == input.UpdatedTimeInvalid ||
                    this.UpdatedTimeInvalid.Equals(input.UpdatedTimeInvalid)
                ) && 
                (
                    this.CustomLabelLengthTooLong == input.CustomLabelLengthTooLong ||
                    this.CustomLabelLengthTooLong.Equals(input.CustomLabelLengthTooLong)
                ) && 
                (
                    this.ProductTypeLengthTooLong == input.ProductTypeLengthTooLong ||
                    this.ProductTypeLengthTooLong.Equals(input.ProductTypeLengthTooLong)
                ) && 
                (
                    this.TooManyAdditionalImageLinks == input.TooManyAdditionalImageLinks ||
                    this.TooManyAdditionalImageLinks.Equals(input.TooManyAdditionalImageLinks)
                ) && 
                (
                    this.MultipackInvalid == input.MultipackInvalid ||
                    this.MultipackInvalid.Equals(input.MultipackInvalid)
                ) && 
                (
                    this.IndexedProductCountLargeDelta == input.IndexedProductCountLargeDelta ||
                    this.IndexedProductCountLargeDelta.Equals(input.IndexedProductCountLargeDelta)
                ) && 
                (
                    this.ItemAdditionalImageDownloadFailure == input.ItemAdditionalImageDownloadFailure ||
                    this.ItemAdditionalImageDownloadFailure.Equals(input.ItemAdditionalImageDownloadFailure)
                ) && 
                (
                    this.OptionalProductCategoryMissing == input.OptionalProductCategoryMissing ||
                    this.OptionalProductCategoryMissing.Equals(input.OptionalProductCategoryMissing)
                ) && 
                (
                    this.OptionalProductCategoryInvalid == input.OptionalProductCategoryInvalid ||
                    this.OptionalProductCategoryInvalid.Equals(input.OptionalProductCategoryInvalid)
                ) && 
                (
                    this.OptionalConditionMissing == input.OptionalConditionMissing ||
                    this.OptionalConditionMissing.Equals(input.OptionalConditionMissing)
                ) && 
                (
                    this.OptionalConditionInvalid == input.OptionalConditionInvalid ||
                    this.OptionalConditionInvalid.Equals(input.OptionalConditionInvalid)
                ) && 
                (
                    this.IosDeepLinkInvalid == input.IosDeepLinkInvalid ||
                    this.IosDeepLinkInvalid.Equals(input.IosDeepLinkInvalid)
                ) && 
                (
                    this.AndroidDeepLinkInvalid == input.AndroidDeepLinkInvalid ||
                    this.AndroidDeepLinkInvalid.Equals(input.AndroidDeepLinkInvalid)
                ) && 
                (
                    this.AvailabilityNormalized == input.AvailabilityNormalized ||
                    this.AvailabilityNormalized.Equals(input.AvailabilityNormalized)
                ) && 
                (
                    this.ConditionNormalized == input.ConditionNormalized ||
                    this.ConditionNormalized.Equals(input.ConditionNormalized)
                ) && 
                (
                    this.GenderNormalized == input.GenderNormalized ||
                    this.GenderNormalized.Equals(input.GenderNormalized)
                ) && 
                (
                    this.SizeTypeNormalized == input.SizeTypeNormalized ||
                    this.SizeTypeNormalized.Equals(input.SizeTypeNormalized)
                ) && 
                (
                    this.AgeGroupNormalized == input.AgeGroupNormalized ||
                    this.AgeGroupNormalized.Equals(input.AgeGroupNormalized)
                ) && 
                (
                    this.UtmSourceAutoCorrected == input.UtmSourceAutoCorrected ||
                    this.UtmSourceAutoCorrected.Equals(input.UtmSourceAutoCorrected)
                ) && 
                (
                    this.CountryDoesNotMapToCurrency == input.CountryDoesNotMapToCurrency ||
                    this.CountryDoesNotMapToCurrency.Equals(input.CountryDoesNotMapToCurrency)
                ) && 
                (
                    this.MinAdPriceInvalid == input.MinAdPriceInvalid ||
                    this.MinAdPriceInvalid.Equals(input.MinAdPriceInvalid)
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
                int hashCode = 41;
                hashCode = hashCode * 59 + this.TitleLengthTooLong.GetHashCode();
                hashCode = hashCode * 59 + this.DescriptionLengthTooLong.GetHashCode();
                hashCode = hashCode * 59 + this.GenderInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.AgeGroupInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.SizeTypeInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.LinkFormatWarning.GetHashCode();
                hashCode = hashCode * 59 + this.DuplicateProducts.GetHashCode();
                hashCode = hashCode * 59 + this.DuplicateLinks.GetHashCode();
                hashCode = hashCode * 59 + this.SalesPriceInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.ProductCategoryDepthWarning.GetHashCode();
                hashCode = hashCode * 59 + this.AdwordsSameAsLink.GetHashCode();
                hashCode = hashCode * 59 + this.DuplicateHeaders.GetHashCode();
                hashCode = hashCode * 59 + this.FetchSameSignature.GetHashCode();
                hashCode = hashCode * 59 + this.AdwordsFormatWarning.GetHashCode();
                hashCode = hashCode * 59 + this.AdditionalImageLinkWarning.GetHashCode();
                hashCode = hashCode * 59 + this.ImageLinkWarning.GetHashCode();
                hashCode = hashCode * 59 + this.ShippingInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.TaxInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.ShippingWeightInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.ExpirationDateInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.AvailabilityDateInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.SaleDateInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.WeightUnitInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.IsBundleInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.UpdatedTimeInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.CustomLabelLengthTooLong.GetHashCode();
                hashCode = hashCode * 59 + this.ProductTypeLengthTooLong.GetHashCode();
                hashCode = hashCode * 59 + this.TooManyAdditionalImageLinks.GetHashCode();
                hashCode = hashCode * 59 + this.MultipackInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.IndexedProductCountLargeDelta.GetHashCode();
                hashCode = hashCode * 59 + this.ItemAdditionalImageDownloadFailure.GetHashCode();
                hashCode = hashCode * 59 + this.OptionalProductCategoryMissing.GetHashCode();
                hashCode = hashCode * 59 + this.OptionalProductCategoryInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.OptionalConditionMissing.GetHashCode();
                hashCode = hashCode * 59 + this.OptionalConditionInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.IosDeepLinkInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.AndroidDeepLinkInvalid.GetHashCode();
                hashCode = hashCode * 59 + this.AvailabilityNormalized.GetHashCode();
                hashCode = hashCode * 59 + this.ConditionNormalized.GetHashCode();
                hashCode = hashCode * 59 + this.GenderNormalized.GetHashCode();
                hashCode = hashCode * 59 + this.SizeTypeNormalized.GetHashCode();
                hashCode = hashCode * 59 + this.AgeGroupNormalized.GetHashCode();
                hashCode = hashCode * 59 + this.UtmSourceAutoCorrected.GetHashCode();
                hashCode = hashCode * 59 + this.CountryDoesNotMapToCurrency.GetHashCode();
                hashCode = hashCode * 59 + this.MinAdPriceInvalid.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}

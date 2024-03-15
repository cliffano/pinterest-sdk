/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// CatalogsFeedValidationErrors
    /// </summary>
    [DataContract(Name = "CatalogsFeedValidationErrors")]
    public partial class CatalogsFeedValidationErrors : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CatalogsFeedValidationErrors" /> class.
        /// </summary>
        /// <param name="fETCHERROR">Pinterest couldn&#39;t download your feed..</param>
        /// <param name="fETCHINACTIVEFEEDERROR">Your feed wasn&#39;t ingested because it hasn’t changed in the previous 90 days..</param>
        /// <param name="eNCODINGERROR">Your feed includes data with an unsupported encoding format..</param>
        /// <param name="dELIMITERERROR">Your feed includes data with formatting errors..</param>
        /// <param name="rEQUIREDCOLUMNSMISSING">Your feed is missing some required column headers..</param>
        /// <param name="dUPLICATEPRODUCTS">Some products are duplicated..</param>
        /// <param name="iMAGELINKINVALID">Some image links are formatted incorrectly..</param>
        /// <param name="iTEMIDMISSING">Some items are missing an item id in their product metadata, those items will not be published..</param>
        /// <param name="tITLEMISSING">Some items are missing a title in their product metadata, those items will not be published..</param>
        /// <param name="dESCRIPTIONMISSING">Some items are missing a description in their product metadata, those items will not be published..</param>
        /// <param name="pRODUCTLINKMISSING">Some items are missing a link URL in their product metadata, those items will not be published..</param>
        /// <param name="iMAGELINKMISSING">Some items are missing an image link URL in their product metadata, those items will not be published..</param>
        /// <param name="aVAILABILITYINVALID">Some items are missing an availability value in their product metadata, those items will not be published..</param>
        /// <param name="pRODUCTPRICEINVALID">Some items have price formatting errors in their product metadata, those items will not be published..</param>
        /// <param name="lINKFORMATINVALID">Some link values are formatted incorrectly..</param>
        /// <param name="pARSELINEERROR">Your feed contains formatting errors for some items..</param>
        /// <param name="aDWORDSFORMATINVALID">Some adwords links contain too many characters..</param>
        /// <param name="iNTERNALSERVICEERROR">We experienced a technical difficulty and were unable to ingest your feed. The next ingestion will happen in 24 hours..</param>
        /// <param name="nOVERIFIEDDOMAIN">Your merchant domain needs to be claimed..</param>
        /// <param name="aDULTINVALID">Some items have invalid adult values..</param>
        /// <param name="iMAGELINKLENGTHTOOLONG">Some items have image_link URLs that contain too many characters, so those items will not be published..</param>
        /// <param name="iNVALIDDOMAIN">Some of your product link values don&#39;t match the verified domain associated with this account..</param>
        /// <param name="fEEDLENGTHTOOLONG">Your feed contains too many items, some items will not be published..</param>
        /// <param name="lINKLENGTHTOOLONG">Some product links contain too many characters, those items will not be published..</param>
        /// <param name="mALFORMEDXML">Your feed couldn&#39;t be validated because the xml file is formatted incorrectly..</param>
        /// <param name="pRICEMISSING">Some products are missing a price, those items will not be published..</param>
        /// <param name="fEEDTOOSMALL">Your feed couldn&#39;t be validated because the file doesn&#39;t contain the minimum number of lines required..</param>
        /// <param name="mAXITEMSPERITEMGROUPEXCEEDED">Some items exceed the maximum number of items per item group, those items will not be published..</param>
        /// <param name="iTEMMAINIMAGEDOWNLOADFAILURE">Some items&#39; main images can&#39;t be found..</param>
        /// <param name="pINJOINCONTENTUNSAFE">Some items were not published because they don&#39;t meet Pinterest&#39;s Merchant Guidelines..</param>
        /// <param name="bLOCKLISTEDIMAGESIGNATURE">Some items were not published because they don&#39;t meet Pinterest&#39;s Merchant Guidelines..</param>
        /// <param name="lISTPRICEINVALID">Some items have list price formatting errors in their product metadata, those items will not be published..</param>
        /// <param name="pRICECANNOTBEDETERMINED">Some items were not published because price cannot be determined. The price, list price, and sale price are all different, so those items will not be published..</param>
        public CatalogsFeedValidationErrors(int fETCHERROR = default(int), int fETCHINACTIVEFEEDERROR = default(int), int eNCODINGERROR = default(int), int dELIMITERERROR = default(int), int rEQUIREDCOLUMNSMISSING = default(int), int dUPLICATEPRODUCTS = default(int), int iMAGELINKINVALID = default(int), int iTEMIDMISSING = default(int), int tITLEMISSING = default(int), int dESCRIPTIONMISSING = default(int), int pRODUCTLINKMISSING = default(int), int iMAGELINKMISSING = default(int), int aVAILABILITYINVALID = default(int), int pRODUCTPRICEINVALID = default(int), int lINKFORMATINVALID = default(int), int pARSELINEERROR = default(int), int aDWORDSFORMATINVALID = default(int), int iNTERNALSERVICEERROR = default(int), int nOVERIFIEDDOMAIN = default(int), int aDULTINVALID = default(int), int iMAGELINKLENGTHTOOLONG = default(int), int iNVALIDDOMAIN = default(int), int fEEDLENGTHTOOLONG = default(int), int lINKLENGTHTOOLONG = default(int), int mALFORMEDXML = default(int), int pRICEMISSING = default(int), int fEEDTOOSMALL = default(int), int mAXITEMSPERITEMGROUPEXCEEDED = default(int), int iTEMMAINIMAGEDOWNLOADFAILURE = default(int), int pINJOINCONTENTUNSAFE = default(int), int bLOCKLISTEDIMAGESIGNATURE = default(int), int lISTPRICEINVALID = default(int), int pRICECANNOTBEDETERMINED = default(int))
        {
            this.FETCH_ERROR = fETCHERROR;
            this.FETCH_INACTIVE_FEED_ERROR = fETCHINACTIVEFEEDERROR;
            this.ENCODING_ERROR = eNCODINGERROR;
            this.DELIMITER_ERROR = dELIMITERERROR;
            this.REQUIRED_COLUMNS_MISSING = rEQUIREDCOLUMNSMISSING;
            this.DUPLICATE_PRODUCTS = dUPLICATEPRODUCTS;
            this.IMAGE_LINK_INVALID = iMAGELINKINVALID;
            this.ITEMID_MISSING = iTEMIDMISSING;
            this.TITLE_MISSING = tITLEMISSING;
            this.DESCRIPTION_MISSING = dESCRIPTIONMISSING;
            this.PRODUCT_LINK_MISSING = pRODUCTLINKMISSING;
            this.IMAGE_LINK_MISSING = iMAGELINKMISSING;
            this.AVAILABILITY_INVALID = aVAILABILITYINVALID;
            this.PRODUCT_PRICE_INVALID = pRODUCTPRICEINVALID;
            this.LINK_FORMAT_INVALID = lINKFORMATINVALID;
            this.PARSE_LINE_ERROR = pARSELINEERROR;
            this.ADWORDS_FORMAT_INVALID = aDWORDSFORMATINVALID;
            this.INTERNAL_SERVICE_ERROR = iNTERNALSERVICEERROR;
            this.NO_VERIFIED_DOMAIN = nOVERIFIEDDOMAIN;
            this.ADULT_INVALID = aDULTINVALID;
            this.IMAGE_LINK_LENGTH_TOO_LONG = iMAGELINKLENGTHTOOLONG;
            this.INVALID_DOMAIN = iNVALIDDOMAIN;
            this.FEED_LENGTH_TOO_LONG = fEEDLENGTHTOOLONG;
            this.LINK_LENGTH_TOO_LONG = lINKLENGTHTOOLONG;
            this.MALFORMED_XML = mALFORMEDXML;
            this.PRICE_MISSING = pRICEMISSING;
            this.FEED_TOO_SMALL = fEEDTOOSMALL;
            this.MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED = mAXITEMSPERITEMGROUPEXCEEDED;
            this.ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE = iTEMMAINIMAGEDOWNLOADFAILURE;
            this.PINJOIN_CONTENT_UNSAFE = pINJOINCONTENTUNSAFE;
            this.BLOCKLISTED_IMAGE_SIGNATURE = bLOCKLISTEDIMAGESIGNATURE;
            this.LIST_PRICE_INVALID = lISTPRICEINVALID;
            this.PRICE_CANNOT_BE_DETERMINED = pRICECANNOTBEDETERMINED;
        }

        /// <summary>
        /// Pinterest couldn&#39;t download your feed.
        /// </summary>
        /// <value>Pinterest couldn&#39;t download your feed.</value>
        [DataMember(Name = "FETCH_ERROR", EmitDefaultValue = false)]
        public int FETCH_ERROR { get; set; }

        /// <summary>
        /// Your feed wasn&#39;t ingested because it hasn’t changed in the previous 90 days.
        /// </summary>
        /// <value>Your feed wasn&#39;t ingested because it hasn’t changed in the previous 90 days.</value>
        [DataMember(Name = "FETCH_INACTIVE_FEED_ERROR", EmitDefaultValue = false)]
        public int FETCH_INACTIVE_FEED_ERROR { get; set; }

        /// <summary>
        /// Your feed includes data with an unsupported encoding format.
        /// </summary>
        /// <value>Your feed includes data with an unsupported encoding format.</value>
        [DataMember(Name = "ENCODING_ERROR", EmitDefaultValue = false)]
        public int ENCODING_ERROR { get; set; }

        /// <summary>
        /// Your feed includes data with formatting errors.
        /// </summary>
        /// <value>Your feed includes data with formatting errors.</value>
        [DataMember(Name = "DELIMITER_ERROR", EmitDefaultValue = false)]
        public int DELIMITER_ERROR { get; set; }

        /// <summary>
        /// Your feed is missing some required column headers.
        /// </summary>
        /// <value>Your feed is missing some required column headers.</value>
        [DataMember(Name = "REQUIRED_COLUMNS_MISSING", EmitDefaultValue = false)]
        public int REQUIRED_COLUMNS_MISSING { get; set; }

        /// <summary>
        /// Some products are duplicated.
        /// </summary>
        /// <value>Some products are duplicated.</value>
        [DataMember(Name = "DUPLICATE_PRODUCTS", EmitDefaultValue = false)]
        public int DUPLICATE_PRODUCTS { get; set; }

        /// <summary>
        /// Some image links are formatted incorrectly.
        /// </summary>
        /// <value>Some image links are formatted incorrectly.</value>
        [DataMember(Name = "IMAGE_LINK_INVALID", EmitDefaultValue = false)]
        public int IMAGE_LINK_INVALID { get; set; }

        /// <summary>
        /// Some items are missing an item id in their product metadata, those items will not be published.
        /// </summary>
        /// <value>Some items are missing an item id in their product metadata, those items will not be published.</value>
        [DataMember(Name = "ITEMID_MISSING", EmitDefaultValue = false)]
        public int ITEMID_MISSING { get; set; }

        /// <summary>
        /// Some items are missing a title in their product metadata, those items will not be published.
        /// </summary>
        /// <value>Some items are missing a title in their product metadata, those items will not be published.</value>
        [DataMember(Name = "TITLE_MISSING", EmitDefaultValue = false)]
        public int TITLE_MISSING { get; set; }

        /// <summary>
        /// Some items are missing a description in their product metadata, those items will not be published.
        /// </summary>
        /// <value>Some items are missing a description in their product metadata, those items will not be published.</value>
        [DataMember(Name = "DESCRIPTION_MISSING", EmitDefaultValue = false)]
        public int DESCRIPTION_MISSING { get; set; }

        /// <summary>
        /// Some items are missing a link URL in their product metadata, those items will not be published.
        /// </summary>
        /// <value>Some items are missing a link URL in their product metadata, those items will not be published.</value>
        [DataMember(Name = "PRODUCT_LINK_MISSING", EmitDefaultValue = false)]
        public int PRODUCT_LINK_MISSING { get; set; }

        /// <summary>
        /// Some items are missing an image link URL in their product metadata, those items will not be published.
        /// </summary>
        /// <value>Some items are missing an image link URL in their product metadata, those items will not be published.</value>
        [DataMember(Name = "IMAGE_LINK_MISSING", EmitDefaultValue = false)]
        public int IMAGE_LINK_MISSING { get; set; }

        /// <summary>
        /// Some items are missing an availability value in their product metadata, those items will not be published.
        /// </summary>
        /// <value>Some items are missing an availability value in their product metadata, those items will not be published.</value>
        [DataMember(Name = "AVAILABILITY_INVALID", EmitDefaultValue = false)]
        public int AVAILABILITY_INVALID { get; set; }

        /// <summary>
        /// Some items have price formatting errors in their product metadata, those items will not be published.
        /// </summary>
        /// <value>Some items have price formatting errors in their product metadata, those items will not be published.</value>
        [DataMember(Name = "PRODUCT_PRICE_INVALID", EmitDefaultValue = false)]
        public int PRODUCT_PRICE_INVALID { get; set; }

        /// <summary>
        /// Some link values are formatted incorrectly.
        /// </summary>
        /// <value>Some link values are formatted incorrectly.</value>
        [DataMember(Name = "LINK_FORMAT_INVALID", EmitDefaultValue = false)]
        public int LINK_FORMAT_INVALID { get; set; }

        /// <summary>
        /// Your feed contains formatting errors for some items.
        /// </summary>
        /// <value>Your feed contains formatting errors for some items.</value>
        [DataMember(Name = "PARSE_LINE_ERROR", EmitDefaultValue = false)]
        public int PARSE_LINE_ERROR { get; set; }

        /// <summary>
        /// Some adwords links contain too many characters.
        /// </summary>
        /// <value>Some adwords links contain too many characters.</value>
        [DataMember(Name = "ADWORDS_FORMAT_INVALID", EmitDefaultValue = false)]
        public int ADWORDS_FORMAT_INVALID { get; set; }

        /// <summary>
        /// We experienced a technical difficulty and were unable to ingest your feed. The next ingestion will happen in 24 hours.
        /// </summary>
        /// <value>We experienced a technical difficulty and were unable to ingest your feed. The next ingestion will happen in 24 hours.</value>
        [DataMember(Name = "INTERNAL_SERVICE_ERROR", EmitDefaultValue = false)]
        public int INTERNAL_SERVICE_ERROR { get; set; }

        /// <summary>
        /// Your merchant domain needs to be claimed.
        /// </summary>
        /// <value>Your merchant domain needs to be claimed.</value>
        [DataMember(Name = "NO_VERIFIED_DOMAIN", EmitDefaultValue = false)]
        public int NO_VERIFIED_DOMAIN { get; set; }

        /// <summary>
        /// Some items have invalid adult values.
        /// </summary>
        /// <value>Some items have invalid adult values.</value>
        [DataMember(Name = "ADULT_INVALID", EmitDefaultValue = false)]
        public int ADULT_INVALID { get; set; }

        /// <summary>
        /// Some items have image_link URLs that contain too many characters, so those items will not be published.
        /// </summary>
        /// <value>Some items have image_link URLs that contain too many characters, so those items will not be published.</value>
        [DataMember(Name = "IMAGE_LINK_LENGTH_TOO_LONG", EmitDefaultValue = false)]
        public int IMAGE_LINK_LENGTH_TOO_LONG { get; set; }

        /// <summary>
        /// Some of your product link values don&#39;t match the verified domain associated with this account.
        /// </summary>
        /// <value>Some of your product link values don&#39;t match the verified domain associated with this account.</value>
        [DataMember(Name = "INVALID_DOMAIN", EmitDefaultValue = false)]
        public int INVALID_DOMAIN { get; set; }

        /// <summary>
        /// Your feed contains too many items, some items will not be published.
        /// </summary>
        /// <value>Your feed contains too many items, some items will not be published.</value>
        [DataMember(Name = "FEED_LENGTH_TOO_LONG", EmitDefaultValue = false)]
        public int FEED_LENGTH_TOO_LONG { get; set; }

        /// <summary>
        /// Some product links contain too many characters, those items will not be published.
        /// </summary>
        /// <value>Some product links contain too many characters, those items will not be published.</value>
        [DataMember(Name = "LINK_LENGTH_TOO_LONG", EmitDefaultValue = false)]
        public int LINK_LENGTH_TOO_LONG { get; set; }

        /// <summary>
        /// Your feed couldn&#39;t be validated because the xml file is formatted incorrectly.
        /// </summary>
        /// <value>Your feed couldn&#39;t be validated because the xml file is formatted incorrectly.</value>
        [DataMember(Name = "MALFORMED_XML", EmitDefaultValue = false)]
        public int MALFORMED_XML { get; set; }

        /// <summary>
        /// Some products are missing a price, those items will not be published.
        /// </summary>
        /// <value>Some products are missing a price, those items will not be published.</value>
        [DataMember(Name = "PRICE_MISSING", EmitDefaultValue = false)]
        public int PRICE_MISSING { get; set; }

        /// <summary>
        /// Your feed couldn&#39;t be validated because the file doesn&#39;t contain the minimum number of lines required.
        /// </summary>
        /// <value>Your feed couldn&#39;t be validated because the file doesn&#39;t contain the minimum number of lines required.</value>
        [DataMember(Name = "FEED_TOO_SMALL", EmitDefaultValue = false)]
        public int FEED_TOO_SMALL { get; set; }

        /// <summary>
        /// Some items exceed the maximum number of items per item group, those items will not be published.
        /// </summary>
        /// <value>Some items exceed the maximum number of items per item group, those items will not be published.</value>
        [DataMember(Name = "MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED", EmitDefaultValue = false)]
        public int MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED { get; set; }

        /// <summary>
        /// Some items&#39; main images can&#39;t be found.
        /// </summary>
        /// <value>Some items&#39; main images can&#39;t be found.</value>
        [DataMember(Name = "ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE", EmitDefaultValue = false)]
        public int ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE { get; set; }

        /// <summary>
        /// Some items were not published because they don&#39;t meet Pinterest&#39;s Merchant Guidelines.
        /// </summary>
        /// <value>Some items were not published because they don&#39;t meet Pinterest&#39;s Merchant Guidelines.</value>
        [DataMember(Name = "PINJOIN_CONTENT_UNSAFE", EmitDefaultValue = false)]
        public int PINJOIN_CONTENT_UNSAFE { get; set; }

        /// <summary>
        /// Some items were not published because they don&#39;t meet Pinterest&#39;s Merchant Guidelines.
        /// </summary>
        /// <value>Some items were not published because they don&#39;t meet Pinterest&#39;s Merchant Guidelines.</value>
        [DataMember(Name = "BLOCKLISTED_IMAGE_SIGNATURE", EmitDefaultValue = false)]
        public int BLOCKLISTED_IMAGE_SIGNATURE { get; set; }

        /// <summary>
        /// Some items have list price formatting errors in their product metadata, those items will not be published.
        /// </summary>
        /// <value>Some items have list price formatting errors in their product metadata, those items will not be published.</value>
        [DataMember(Name = "LIST_PRICE_INVALID", EmitDefaultValue = false)]
        public int LIST_PRICE_INVALID { get; set; }

        /// <summary>
        /// Some items were not published because price cannot be determined. The price, list price, and sale price are all different, so those items will not be published.
        /// </summary>
        /// <value>Some items were not published because price cannot be determined. The price, list price, and sale price are all different, so those items will not be published.</value>
        [DataMember(Name = "PRICE_CANNOT_BE_DETERMINED", EmitDefaultValue = false)]
        public int PRICE_CANNOT_BE_DETERMINED { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class CatalogsFeedValidationErrors {\n");
            sb.Append("  FETCH_ERROR: ").Append(FETCH_ERROR).Append("\n");
            sb.Append("  FETCH_INACTIVE_FEED_ERROR: ").Append(FETCH_INACTIVE_FEED_ERROR).Append("\n");
            sb.Append("  ENCODING_ERROR: ").Append(ENCODING_ERROR).Append("\n");
            sb.Append("  DELIMITER_ERROR: ").Append(DELIMITER_ERROR).Append("\n");
            sb.Append("  REQUIRED_COLUMNS_MISSING: ").Append(REQUIRED_COLUMNS_MISSING).Append("\n");
            sb.Append("  DUPLICATE_PRODUCTS: ").Append(DUPLICATE_PRODUCTS).Append("\n");
            sb.Append("  IMAGE_LINK_INVALID: ").Append(IMAGE_LINK_INVALID).Append("\n");
            sb.Append("  ITEMID_MISSING: ").Append(ITEMID_MISSING).Append("\n");
            sb.Append("  TITLE_MISSING: ").Append(TITLE_MISSING).Append("\n");
            sb.Append("  DESCRIPTION_MISSING: ").Append(DESCRIPTION_MISSING).Append("\n");
            sb.Append("  PRODUCT_LINK_MISSING: ").Append(PRODUCT_LINK_MISSING).Append("\n");
            sb.Append("  IMAGE_LINK_MISSING: ").Append(IMAGE_LINK_MISSING).Append("\n");
            sb.Append("  AVAILABILITY_INVALID: ").Append(AVAILABILITY_INVALID).Append("\n");
            sb.Append("  PRODUCT_PRICE_INVALID: ").Append(PRODUCT_PRICE_INVALID).Append("\n");
            sb.Append("  LINK_FORMAT_INVALID: ").Append(LINK_FORMAT_INVALID).Append("\n");
            sb.Append("  PARSE_LINE_ERROR: ").Append(PARSE_LINE_ERROR).Append("\n");
            sb.Append("  ADWORDS_FORMAT_INVALID: ").Append(ADWORDS_FORMAT_INVALID).Append("\n");
            sb.Append("  INTERNAL_SERVICE_ERROR: ").Append(INTERNAL_SERVICE_ERROR).Append("\n");
            sb.Append("  NO_VERIFIED_DOMAIN: ").Append(NO_VERIFIED_DOMAIN).Append("\n");
            sb.Append("  ADULT_INVALID: ").Append(ADULT_INVALID).Append("\n");
            sb.Append("  IMAGE_LINK_LENGTH_TOO_LONG: ").Append(IMAGE_LINK_LENGTH_TOO_LONG).Append("\n");
            sb.Append("  INVALID_DOMAIN: ").Append(INVALID_DOMAIN).Append("\n");
            sb.Append("  FEED_LENGTH_TOO_LONG: ").Append(FEED_LENGTH_TOO_LONG).Append("\n");
            sb.Append("  LINK_LENGTH_TOO_LONG: ").Append(LINK_LENGTH_TOO_LONG).Append("\n");
            sb.Append("  MALFORMED_XML: ").Append(MALFORMED_XML).Append("\n");
            sb.Append("  PRICE_MISSING: ").Append(PRICE_MISSING).Append("\n");
            sb.Append("  FEED_TOO_SMALL: ").Append(FEED_TOO_SMALL).Append("\n");
            sb.Append("  MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED: ").Append(MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED).Append("\n");
            sb.Append("  ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE: ").Append(ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE).Append("\n");
            sb.Append("  PINJOIN_CONTENT_UNSAFE: ").Append(PINJOIN_CONTENT_UNSAFE).Append("\n");
            sb.Append("  BLOCKLISTED_IMAGE_SIGNATURE: ").Append(BLOCKLISTED_IMAGE_SIGNATURE).Append("\n");
            sb.Append("  LIST_PRICE_INVALID: ").Append(LIST_PRICE_INVALID).Append("\n");
            sb.Append("  PRICE_CANNOT_BE_DETERMINED: ").Append(PRICE_CANNOT_BE_DETERMINED).Append("\n");
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
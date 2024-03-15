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
        /// <p>Catalog product group type</p> <p>MERCHANT_CREATED: Product groups created by merchants. <br>ALL_PRODUCTS: Consists of every product in your latest successful feed upload. <br>BEST_DEALS: Consists of products with the deepest drop in price. <br>PINNER_FAVORITES: Consists of products that are resonating most with people on Pinterest, based on engagement. <br>TOP_SELLERS: Consists of products with the highest conversion rate, if you have the conversion tag installed. <br>BACK_IN_STOCK: Consists of products that were previously out of stock and are now in stock. <br>NEW_ARRIVALS: Consists of products that are new to your Catalog. <br>SHOPIFY_COLLECTION: Product groups created based on Shopify Product Collections. <br>I2PC: Product groups created based on predicted product category.</p>
        /// </summary>
        /// <value><p>Catalog product group type</p> <p>MERCHANT_CREATED: Product groups created by merchants. <br>ALL_PRODUCTS: Consists of every product in your latest successful feed upload. <br>BEST_DEALS: Consists of products with the deepest drop in price. <br>PINNER_FAVORITES: Consists of products that are resonating most with people on Pinterest, based on engagement. <br>TOP_SELLERS: Consists of products with the highest conversion rate, if you have the conversion tag installed. <br>BACK_IN_STOCK: Consists of products that were previously out of stock and are now in stock. <br>NEW_ARRIVALS: Consists of products that are new to your Catalog. <br>SHOPIFY_COLLECTION: Product groups created based on Shopify Product Collections. <br>I2PC: Product groups created based on predicted product category.</p></value>
        [TypeConverter(typeof(CustomEnumConverter<CatalogsProductGroupType>))]
        [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
        public enum CatalogsProductGroupType
        {
            
            /// <summary>
            /// Enum MERCHANTCREATEDEnum for MERCHANT_CREATED
            /// </summary>
            [EnumMember(Value = "MERCHANT_CREATED")]
            MERCHANTCREATEDEnum = 1,
            
            /// <summary>
            /// Enum ALLPRODUCTSEnum for ALL_PRODUCTS
            /// </summary>
            [EnumMember(Value = "ALL_PRODUCTS")]
            ALLPRODUCTSEnum = 2,
            
            /// <summary>
            /// Enum BESTDEALSEnum for BEST_DEALS
            /// </summary>
            [EnumMember(Value = "BEST_DEALS")]
            BESTDEALSEnum = 3,
            
            /// <summary>
            /// Enum PINNERFAVORITESEnum for PINNER_FAVORITES
            /// </summary>
            [EnumMember(Value = "PINNER_FAVORITES")]
            PINNERFAVORITESEnum = 4,
            
            /// <summary>
            /// Enum TOPSELLERSEnum for TOP_SELLERS
            /// </summary>
            [EnumMember(Value = "TOP_SELLERS")]
            TOPSELLERSEnum = 5,
            
            /// <summary>
            /// Enum BACKINSTOCKEnum for BACK_IN_STOCK
            /// </summary>
            [EnumMember(Value = "BACK_IN_STOCK")]
            BACKINSTOCKEnum = 6,
            
            /// <summary>
            /// Enum NEWARRIVALSEnum for NEW_ARRIVALS
            /// </summary>
            [EnumMember(Value = "NEW_ARRIVALS")]
            NEWARRIVALSEnum = 7,
            
            /// <summary>
            /// Enum SHOPIFYCOLLECTIONSEnum for SHOPIFY_COLLECTIONS
            /// </summary>
            [EnumMember(Value = "SHOPIFY_COLLECTIONS")]
            SHOPIFYCOLLECTIONSEnum = 8,
            
            /// <summary>
            /// Enum I2PCEnum for I2PC
            /// </summary>
            [EnumMember(Value = "I2PC")]
            I2PCEnum = 9
        }
}

<?php
/**
 * CatalogsFeedValidationErrors
 *
 * PHP version 7.1.3
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the CatalogsFeedValidationErrors model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class CatalogsFeedValidationErrors 
{
        /**
     * @var int|null
     * @SerializedName("fetch_error")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $fetchError;

    /**
     * @var int|null
     * @SerializedName("fetch_inactive_feed_error")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $fetchInactiveFeedError;

    /**
     * @var int|null
     * @SerializedName("encoding_error")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $encodingError;

    /**
     * @var int|null
     * @SerializedName("delimiter_error")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $delimiterError;

    /**
     * @var int|null
     * @SerializedName("required_columns_missing")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $requiredColumnsMissing;

    /**
     * @var int|null
     * @SerializedName("image_link_invalid")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $imageLinkInvalid;

    /**
     * @var int|null
     * @SerializedName("itemid_missing")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $itemidMissing;

    /**
     * @var int|null
     * @SerializedName("title_missing")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $titleMissing;

    /**
     * @var int|null
     * @SerializedName("description_missing")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $descriptionMissing;

    /**
     * @var int|null
     * @SerializedName("product_category_invalid")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $productCategoryInvalid;

    /**
     * @var int|null
     * @SerializedName("product_link_missing")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $productLinkMissing;

    /**
     * @var int|null
     * @SerializedName("image_link_missing")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $imageLinkMissing;

    /**
     * @var int|null
     * @SerializedName("availability_invalid")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $availabilityInvalid;

    /**
     * @var int|null
     * @SerializedName("product_price_invalid")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $productPriceInvalid;

    /**
     * @var int|null
     * @SerializedName("link_format_invalid")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $linkFormatInvalid;

    /**
     * @var int|null
     * @SerializedName("parse_line_error")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $parseLineError;

    /**
     * @var int|null
     * @SerializedName("adwords_format_invalid")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $adwordsFormatInvalid;

    /**
     * @var int|null
     * @SerializedName("product_category_missing")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $productCategoryMissing;

    /**
     * @var int|null
     * @SerializedName("internal_service_error")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $internalServiceError;

    /**
     * @var int|null
     * @SerializedName("no_verified_domain")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $noVerifiedDomain;

    /**
     * @var int|null
     * @SerializedName("adult_invalid")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $adultInvalid;

    /**
     * @var int|null
     * @SerializedName("invalid_domain")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $invalidDomain;

    /**
     * @var int|null
     * @SerializedName("feed_length_too_long")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $feedLengthTooLong;

    /**
     * @var int|null
     * @SerializedName("link_length_too_long")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $linkLengthTooLong;

    /**
     * @var int|null
     * @SerializedName("malformed_xml")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $malformedXml;

    /**
     * @var int|null
     * @SerializedName("redirect_invalid")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $redirectInvalid;

    /**
     * @var int|null
     * @SerializedName("price_missing")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $priceMissing;

    /**
     * @var int|null
     * @SerializedName("feed_too_small")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $feedTooSmall;

    /**
     * @var int|null
     * @SerializedName("condition_invalid")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $conditionInvalid;

    /**
     * @var int|null
     * @SerializedName("shopify_no_products")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $shopifyNoProducts;

    /**
     * @var int|null
     * @SerializedName("max_items_per_item_group_exceeded")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $maxItemsPerItemGroupExceeded;

    /**
     * @var int|null
     * @SerializedName("item_main_image_download_failure")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $itemMainImageDownloadFailure;

    /**
     * @var int|null
     * @SerializedName("pinjoin_content_unsafe")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $pinjoinContentUnsafe;

    /**
     * @var int|null
     * @SerializedName("blocklisted_image_signature")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $blocklistedImageSignature;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->fetchError = isset($data['fetchError']) ? $data['fetchError'] : null;
        $this->fetchInactiveFeedError = isset($data['fetchInactiveFeedError']) ? $data['fetchInactiveFeedError'] : null;
        $this->encodingError = isset($data['encodingError']) ? $data['encodingError'] : null;
        $this->delimiterError = isset($data['delimiterError']) ? $data['delimiterError'] : null;
        $this->requiredColumnsMissing = isset($data['requiredColumnsMissing']) ? $data['requiredColumnsMissing'] : null;
        $this->imageLinkInvalid = isset($data['imageLinkInvalid']) ? $data['imageLinkInvalid'] : null;
        $this->itemidMissing = isset($data['itemidMissing']) ? $data['itemidMissing'] : null;
        $this->titleMissing = isset($data['titleMissing']) ? $data['titleMissing'] : null;
        $this->descriptionMissing = isset($data['descriptionMissing']) ? $data['descriptionMissing'] : null;
        $this->productCategoryInvalid = isset($data['productCategoryInvalid']) ? $data['productCategoryInvalid'] : null;
        $this->productLinkMissing = isset($data['productLinkMissing']) ? $data['productLinkMissing'] : null;
        $this->imageLinkMissing = isset($data['imageLinkMissing']) ? $data['imageLinkMissing'] : null;
        $this->availabilityInvalid = isset($data['availabilityInvalid']) ? $data['availabilityInvalid'] : null;
        $this->productPriceInvalid = isset($data['productPriceInvalid']) ? $data['productPriceInvalid'] : null;
        $this->linkFormatInvalid = isset($data['linkFormatInvalid']) ? $data['linkFormatInvalid'] : null;
        $this->parseLineError = isset($data['parseLineError']) ? $data['parseLineError'] : null;
        $this->adwordsFormatInvalid = isset($data['adwordsFormatInvalid']) ? $data['adwordsFormatInvalid'] : null;
        $this->productCategoryMissing = isset($data['productCategoryMissing']) ? $data['productCategoryMissing'] : null;
        $this->internalServiceError = isset($data['internalServiceError']) ? $data['internalServiceError'] : null;
        $this->noVerifiedDomain = isset($data['noVerifiedDomain']) ? $data['noVerifiedDomain'] : null;
        $this->adultInvalid = isset($data['adultInvalid']) ? $data['adultInvalid'] : null;
        $this->invalidDomain = isset($data['invalidDomain']) ? $data['invalidDomain'] : null;
        $this->feedLengthTooLong = isset($data['feedLengthTooLong']) ? $data['feedLengthTooLong'] : null;
        $this->linkLengthTooLong = isset($data['linkLengthTooLong']) ? $data['linkLengthTooLong'] : null;
        $this->malformedXml = isset($data['malformedXml']) ? $data['malformedXml'] : null;
        $this->redirectInvalid = isset($data['redirectInvalid']) ? $data['redirectInvalid'] : null;
        $this->priceMissing = isset($data['priceMissing']) ? $data['priceMissing'] : null;
        $this->feedTooSmall = isset($data['feedTooSmall']) ? $data['feedTooSmall'] : null;
        $this->conditionInvalid = isset($data['conditionInvalid']) ? $data['conditionInvalid'] : null;
        $this->shopifyNoProducts = isset($data['shopifyNoProducts']) ? $data['shopifyNoProducts'] : null;
        $this->maxItemsPerItemGroupExceeded = isset($data['maxItemsPerItemGroupExceeded']) ? $data['maxItemsPerItemGroupExceeded'] : null;
        $this->itemMainImageDownloadFailure = isset($data['itemMainImageDownloadFailure']) ? $data['itemMainImageDownloadFailure'] : null;
        $this->pinjoinContentUnsafe = isset($data['pinjoinContentUnsafe']) ? $data['pinjoinContentUnsafe'] : null;
        $this->blocklistedImageSignature = isset($data['blocklistedImageSignature']) ? $data['blocklistedImageSignature'] : null;
    }

    /**
     * Gets fetchError.
     *
     * @return int|null
     */
    public function getFetchError()
    {
        return $this->fetchError;
    }

    /**
     * Sets fetchError.
     *
     * @param int|null $fetchError
     *
     * @return $this
     */
    public function setFetchError($fetchError = null)
    {
        $this->fetchError = $fetchError;

        return $this;
    }

    /**
     * Gets fetchInactiveFeedError.
     *
     * @return int|null
     */
    public function getFetchInactiveFeedError()
    {
        return $this->fetchInactiveFeedError;
    }

    /**
     * Sets fetchInactiveFeedError.
     *
     * @param int|null $fetchInactiveFeedError
     *
     * @return $this
     */
    public function setFetchInactiveFeedError($fetchInactiveFeedError = null)
    {
        $this->fetchInactiveFeedError = $fetchInactiveFeedError;

        return $this;
    }

    /**
     * Gets encodingError.
     *
     * @return int|null
     */
    public function getEncodingError()
    {
        return $this->encodingError;
    }

    /**
     * Sets encodingError.
     *
     * @param int|null $encodingError
     *
     * @return $this
     */
    public function setEncodingError($encodingError = null)
    {
        $this->encodingError = $encodingError;

        return $this;
    }

    /**
     * Gets delimiterError.
     *
     * @return int|null
     */
    public function getDelimiterError()
    {
        return $this->delimiterError;
    }

    /**
     * Sets delimiterError.
     *
     * @param int|null $delimiterError
     *
     * @return $this
     */
    public function setDelimiterError($delimiterError = null)
    {
        $this->delimiterError = $delimiterError;

        return $this;
    }

    /**
     * Gets requiredColumnsMissing.
     *
     * @return int|null
     */
    public function getRequiredColumnsMissing()
    {
        return $this->requiredColumnsMissing;
    }

    /**
     * Sets requiredColumnsMissing.
     *
     * @param int|null $requiredColumnsMissing
     *
     * @return $this
     */
    public function setRequiredColumnsMissing($requiredColumnsMissing = null)
    {
        $this->requiredColumnsMissing = $requiredColumnsMissing;

        return $this;
    }

    /**
     * Gets imageLinkInvalid.
     *
     * @return int|null
     */
    public function getImageLinkInvalid()
    {
        return $this->imageLinkInvalid;
    }

    /**
     * Sets imageLinkInvalid.
     *
     * @param int|null $imageLinkInvalid
     *
     * @return $this
     */
    public function setImageLinkInvalid($imageLinkInvalid = null)
    {
        $this->imageLinkInvalid = $imageLinkInvalid;

        return $this;
    }

    /**
     * Gets itemidMissing.
     *
     * @return int|null
     */
    public function getItemidMissing()
    {
        return $this->itemidMissing;
    }

    /**
     * Sets itemidMissing.
     *
     * @param int|null $itemidMissing
     *
     * @return $this
     */
    public function setItemidMissing($itemidMissing = null)
    {
        $this->itemidMissing = $itemidMissing;

        return $this;
    }

    /**
     * Gets titleMissing.
     *
     * @return int|null
     */
    public function getTitleMissing()
    {
        return $this->titleMissing;
    }

    /**
     * Sets titleMissing.
     *
     * @param int|null $titleMissing
     *
     * @return $this
     */
    public function setTitleMissing($titleMissing = null)
    {
        $this->titleMissing = $titleMissing;

        return $this;
    }

    /**
     * Gets descriptionMissing.
     *
     * @return int|null
     */
    public function getDescriptionMissing()
    {
        return $this->descriptionMissing;
    }

    /**
     * Sets descriptionMissing.
     *
     * @param int|null $descriptionMissing
     *
     * @return $this
     */
    public function setDescriptionMissing($descriptionMissing = null)
    {
        $this->descriptionMissing = $descriptionMissing;

        return $this;
    }

    /**
     * Gets productCategoryInvalid.
     *
     * @return int|null
     */
    public function getProductCategoryInvalid()
    {
        return $this->productCategoryInvalid;
    }

    /**
     * Sets productCategoryInvalid.
     *
     * @param int|null $productCategoryInvalid
     *
     * @return $this
     */
    public function setProductCategoryInvalid($productCategoryInvalid = null)
    {
        $this->productCategoryInvalid = $productCategoryInvalid;

        return $this;
    }

    /**
     * Gets productLinkMissing.
     *
     * @return int|null
     */
    public function getProductLinkMissing()
    {
        return $this->productLinkMissing;
    }

    /**
     * Sets productLinkMissing.
     *
     * @param int|null $productLinkMissing
     *
     * @return $this
     */
    public function setProductLinkMissing($productLinkMissing = null)
    {
        $this->productLinkMissing = $productLinkMissing;

        return $this;
    }

    /**
     * Gets imageLinkMissing.
     *
     * @return int|null
     */
    public function getImageLinkMissing()
    {
        return $this->imageLinkMissing;
    }

    /**
     * Sets imageLinkMissing.
     *
     * @param int|null $imageLinkMissing
     *
     * @return $this
     */
    public function setImageLinkMissing($imageLinkMissing = null)
    {
        $this->imageLinkMissing = $imageLinkMissing;

        return $this;
    }

    /**
     * Gets availabilityInvalid.
     *
     * @return int|null
     */
    public function getAvailabilityInvalid()
    {
        return $this->availabilityInvalid;
    }

    /**
     * Sets availabilityInvalid.
     *
     * @param int|null $availabilityInvalid
     *
     * @return $this
     */
    public function setAvailabilityInvalid($availabilityInvalid = null)
    {
        $this->availabilityInvalid = $availabilityInvalid;

        return $this;
    }

    /**
     * Gets productPriceInvalid.
     *
     * @return int|null
     */
    public function getProductPriceInvalid()
    {
        return $this->productPriceInvalid;
    }

    /**
     * Sets productPriceInvalid.
     *
     * @param int|null $productPriceInvalid
     *
     * @return $this
     */
    public function setProductPriceInvalid($productPriceInvalid = null)
    {
        $this->productPriceInvalid = $productPriceInvalid;

        return $this;
    }

    /**
     * Gets linkFormatInvalid.
     *
     * @return int|null
     */
    public function getLinkFormatInvalid()
    {
        return $this->linkFormatInvalid;
    }

    /**
     * Sets linkFormatInvalid.
     *
     * @param int|null $linkFormatInvalid
     *
     * @return $this
     */
    public function setLinkFormatInvalid($linkFormatInvalid = null)
    {
        $this->linkFormatInvalid = $linkFormatInvalid;

        return $this;
    }

    /**
     * Gets parseLineError.
     *
     * @return int|null
     */
    public function getParseLineError()
    {
        return $this->parseLineError;
    }

    /**
     * Sets parseLineError.
     *
     * @param int|null $parseLineError
     *
     * @return $this
     */
    public function setParseLineError($parseLineError = null)
    {
        $this->parseLineError = $parseLineError;

        return $this;
    }

    /**
     * Gets adwordsFormatInvalid.
     *
     * @return int|null
     */
    public function getAdwordsFormatInvalid()
    {
        return $this->adwordsFormatInvalid;
    }

    /**
     * Sets adwordsFormatInvalid.
     *
     * @param int|null $adwordsFormatInvalid
     *
     * @return $this
     */
    public function setAdwordsFormatInvalid($adwordsFormatInvalid = null)
    {
        $this->adwordsFormatInvalid = $adwordsFormatInvalid;

        return $this;
    }

    /**
     * Gets productCategoryMissing.
     *
     * @return int|null
     */
    public function getProductCategoryMissing()
    {
        return $this->productCategoryMissing;
    }

    /**
     * Sets productCategoryMissing.
     *
     * @param int|null $productCategoryMissing
     *
     * @return $this
     */
    public function setProductCategoryMissing($productCategoryMissing = null)
    {
        $this->productCategoryMissing = $productCategoryMissing;

        return $this;
    }

    /**
     * Gets internalServiceError.
     *
     * @return int|null
     */
    public function getInternalServiceError()
    {
        return $this->internalServiceError;
    }

    /**
     * Sets internalServiceError.
     *
     * @param int|null $internalServiceError
     *
     * @return $this
     */
    public function setInternalServiceError($internalServiceError = null)
    {
        $this->internalServiceError = $internalServiceError;

        return $this;
    }

    /**
     * Gets noVerifiedDomain.
     *
     * @return int|null
     */
    public function getNoVerifiedDomain()
    {
        return $this->noVerifiedDomain;
    }

    /**
     * Sets noVerifiedDomain.
     *
     * @param int|null $noVerifiedDomain
     *
     * @return $this
     */
    public function setNoVerifiedDomain($noVerifiedDomain = null)
    {
        $this->noVerifiedDomain = $noVerifiedDomain;

        return $this;
    }

    /**
     * Gets adultInvalid.
     *
     * @return int|null
     */
    public function getAdultInvalid()
    {
        return $this->adultInvalid;
    }

    /**
     * Sets adultInvalid.
     *
     * @param int|null $adultInvalid
     *
     * @return $this
     */
    public function setAdultInvalid($adultInvalid = null)
    {
        $this->adultInvalid = $adultInvalid;

        return $this;
    }

    /**
     * Gets invalidDomain.
     *
     * @return int|null
     */
    public function getInvalidDomain()
    {
        return $this->invalidDomain;
    }

    /**
     * Sets invalidDomain.
     *
     * @param int|null $invalidDomain
     *
     * @return $this
     */
    public function setInvalidDomain($invalidDomain = null)
    {
        $this->invalidDomain = $invalidDomain;

        return $this;
    }

    /**
     * Gets feedLengthTooLong.
     *
     * @return int|null
     */
    public function getFeedLengthTooLong()
    {
        return $this->feedLengthTooLong;
    }

    /**
     * Sets feedLengthTooLong.
     *
     * @param int|null $feedLengthTooLong
     *
     * @return $this
     */
    public function setFeedLengthTooLong($feedLengthTooLong = null)
    {
        $this->feedLengthTooLong = $feedLengthTooLong;

        return $this;
    }

    /**
     * Gets linkLengthTooLong.
     *
     * @return int|null
     */
    public function getLinkLengthTooLong()
    {
        return $this->linkLengthTooLong;
    }

    /**
     * Sets linkLengthTooLong.
     *
     * @param int|null $linkLengthTooLong
     *
     * @return $this
     */
    public function setLinkLengthTooLong($linkLengthTooLong = null)
    {
        $this->linkLengthTooLong = $linkLengthTooLong;

        return $this;
    }

    /**
     * Gets malformedXml.
     *
     * @return int|null
     */
    public function getMalformedXml()
    {
        return $this->malformedXml;
    }

    /**
     * Sets malformedXml.
     *
     * @param int|null $malformedXml
     *
     * @return $this
     */
    public function setMalformedXml($malformedXml = null)
    {
        $this->malformedXml = $malformedXml;

        return $this;
    }

    /**
     * Gets redirectInvalid.
     *
     * @return int|null
     */
    public function getRedirectInvalid()
    {
        return $this->redirectInvalid;
    }

    /**
     * Sets redirectInvalid.
     *
     * @param int|null $redirectInvalid
     *
     * @return $this
     */
    public function setRedirectInvalid($redirectInvalid = null)
    {
        $this->redirectInvalid = $redirectInvalid;

        return $this;
    }

    /**
     * Gets priceMissing.
     *
     * @return int|null
     */
    public function getPriceMissing()
    {
        return $this->priceMissing;
    }

    /**
     * Sets priceMissing.
     *
     * @param int|null $priceMissing
     *
     * @return $this
     */
    public function setPriceMissing($priceMissing = null)
    {
        $this->priceMissing = $priceMissing;

        return $this;
    }

    /**
     * Gets feedTooSmall.
     *
     * @return int|null
     */
    public function getFeedTooSmall()
    {
        return $this->feedTooSmall;
    }

    /**
     * Sets feedTooSmall.
     *
     * @param int|null $feedTooSmall
     *
     * @return $this
     */
    public function setFeedTooSmall($feedTooSmall = null)
    {
        $this->feedTooSmall = $feedTooSmall;

        return $this;
    }

    /**
     * Gets conditionInvalid.
     *
     * @return int|null
     */
    public function getConditionInvalid()
    {
        return $this->conditionInvalid;
    }

    /**
     * Sets conditionInvalid.
     *
     * @param int|null $conditionInvalid
     *
     * @return $this
     */
    public function setConditionInvalid($conditionInvalid = null)
    {
        $this->conditionInvalid = $conditionInvalid;

        return $this;
    }

    /**
     * Gets shopifyNoProducts.
     *
     * @return int|null
     */
    public function getShopifyNoProducts()
    {
        return $this->shopifyNoProducts;
    }

    /**
     * Sets shopifyNoProducts.
     *
     * @param int|null $shopifyNoProducts
     *
     * @return $this
     */
    public function setShopifyNoProducts($shopifyNoProducts = null)
    {
        $this->shopifyNoProducts = $shopifyNoProducts;

        return $this;
    }

    /**
     * Gets maxItemsPerItemGroupExceeded.
     *
     * @return int|null
     */
    public function getMaxItemsPerItemGroupExceeded()
    {
        return $this->maxItemsPerItemGroupExceeded;
    }

    /**
     * Sets maxItemsPerItemGroupExceeded.
     *
     * @param int|null $maxItemsPerItemGroupExceeded
     *
     * @return $this
     */
    public function setMaxItemsPerItemGroupExceeded($maxItemsPerItemGroupExceeded = null)
    {
        $this->maxItemsPerItemGroupExceeded = $maxItemsPerItemGroupExceeded;

        return $this;
    }

    /**
     * Gets itemMainImageDownloadFailure.
     *
     * @return int|null
     */
    public function getItemMainImageDownloadFailure()
    {
        return $this->itemMainImageDownloadFailure;
    }

    /**
     * Sets itemMainImageDownloadFailure.
     *
     * @param int|null $itemMainImageDownloadFailure
     *
     * @return $this
     */
    public function setItemMainImageDownloadFailure($itemMainImageDownloadFailure = null)
    {
        $this->itemMainImageDownloadFailure = $itemMainImageDownloadFailure;

        return $this;
    }

    /**
     * Gets pinjoinContentUnsafe.
     *
     * @return int|null
     */
    public function getPinjoinContentUnsafe()
    {
        return $this->pinjoinContentUnsafe;
    }

    /**
     * Sets pinjoinContentUnsafe.
     *
     * @param int|null $pinjoinContentUnsafe
     *
     * @return $this
     */
    public function setPinjoinContentUnsafe($pinjoinContentUnsafe = null)
    {
        $this->pinjoinContentUnsafe = $pinjoinContentUnsafe;

        return $this;
    }

    /**
     * Gets blocklistedImageSignature.
     *
     * @return int|null
     */
    public function getBlocklistedImageSignature()
    {
        return $this->blocklistedImageSignature;
    }

    /**
     * Sets blocklistedImageSignature.
     *
     * @param int|null $blocklistedImageSignature
     *
     * @return $this
     */
    public function setBlocklistedImageSignature($blocklistedImageSignature = null)
    {
        $this->blocklistedImageSignature = $blocklistedImageSignature;

        return $this;
    }
}


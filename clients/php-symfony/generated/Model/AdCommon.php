<?php
/**
 * AdCommon
 *
 * PHP version 8.1.1
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
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
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
use JMS\Serializer\Annotation\Accessor;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the AdCommon model.
 *
 * Creation fields
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class AdCommon 
{
        /**
     * ID of the ad group that contains the ad.
     *
     * @var string|null
     * @SerializedName("ad_group_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^(AG)?\\d+$/")
     */
    protected ?string $adGroupId = null;

    /**
     * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
     *
     * @var string|null
     * @SerializedName("android_deep_link")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $androidDeepLink = null;

    /**
     * Comma-separated deep links for the carousel pin on Android.
     *
     * @var string[]|null
     * @SerializedName("carousel_android_deep_links")
     * @Assert\All({
     *   @Assert\Type("string")
     * })
     * @Type("array<string>")
     */
    protected ?array $carouselAndroidDeepLinks = null;

    /**
     * Comma-separated destination URLs for the carousel pin to promote.
     *
     * @var string[]|null
     * @SerializedName("carousel_destination_urls")
     * @Assert\All({
     *   @Assert\Type("string")
     * })
     * @Type("array<string>")
     */
    protected ?array $carouselDestinationUrls = null;

    /**
     * Comma-separated deep links for the carousel pin on iOS.
     *
     * @var string[]|null
     * @SerializedName("carousel_ios_deep_links")
     * @Assert\All({
     *   @Assert\Type("string")
     * })
     * @Type("array<string>")
     */
    protected ?array $carouselIosDeepLinks = null;

    /**
     * Tracking url for the ad clicks.
     *
     * @var string|null
     * @SerializedName("click_tracking_url")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $clickTrackingUrl = null;

    /**
     * @var CreativeType|null
     * @SerializedName("creative_type")
        * @Accessor(getter="getSerializedCreativeType")
        * @Type("string")
     */
    protected ?CreativeType $creativeType = null;

    /**
     * Destination URL.
     *
     * @var string|null
     * @SerializedName("destination_url")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $destinationUrl = null;

    /**
     * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
     *
     * @var string|null
     * @SerializedName("ios_deep_link")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $iosDeepLink = null;

    /**
     * Is original pin deleted?
     *
     * @var bool|null
     * @SerializedName("is_pin_deleted")
     * @Assert\Type("bool")
     * @Type("bool")
     */
    protected ?bool $isPinDeleted = null;

    /**
     * Is pin repinnable?
     *
     * @var bool|null
     * @SerializedName("is_removable")
     * @Assert\Type("bool")
     * @Type("bool")
     */
    protected ?bool $isRemovable = null;

    /**
     * Name of the ad - 255 chars max.
     *
     * @var string|null
     * @SerializedName("name")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $name = null;

    /**
     * @var EntityStatus|null
     * @SerializedName("status")
        * @Accessor(getter="getSerializedStatus")
        * @Type("string")
     */
    protected ?EntityStatus $status = null;

    /**
     * @var AdCommonTrackingUrls|null
     * @SerializedName("tracking_urls")
     * @Assert\Type("OpenAPI\Server\Model\AdCommonTrackingUrls")
     * @Type("OpenAPI\Server\Model\AdCommonTrackingUrls")
     */
    protected ?AdCommonTrackingUrls $trackingUrls = null;

    /**
     * Tracking URL for ad impressions.
     *
     * @var string|null
     * @SerializedName("view_tracking_url")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $viewTrackingUrl = null;

    /**
     * Lead form ID for lead ad generation.
     *
     * @var string|null
     * @SerializedName("lead_form_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^(AG)?\\d+$/")
     */
    protected ?string $leadFormId = null;

    /**
     * @var GridClickType|null
     * @SerializedName("grid_click_type")
        * @Accessor(getter="getSerializedGridClickType")
        * @Type("string")
     */
    protected ?GridClickType $gridClickType = null;

    /**
     * Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
     *
     * @var string|null
     * @SerializedName("customizable_cta_type")
     * @Assert\Choice({ "GET_OFFER", "LEARN_MORE", "ORDER_NOW", "SHOP_NOW", "SIGN_UP", "SUBSCRIBE", "BUY_NOW", "CONTACT_US", "GET_QUOTE", "VISIT_WEBSITE", "APPLY_NOW", "BOOK_NOW", "REQUEST_DEMO", "REGISTER_NOW", "FIND_A_DEALER", "ADD_TO_CART", "WATCH_NOW", "READ_MORE", "null" })
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $customizableCtaType = null;

    /**
     * @var AdCommonQuizPinData|null
     * @SerializedName("quiz_pin_data")
     * @Assert\Type("OpenAPI\Server\Model\AdCommonQuizPinData")
     * @Type("OpenAPI\Server\Model\AdCommonQuizPinData")
     */
    protected ?AdCommonQuizPinData $quizPinData = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->adGroupId = array_key_exists('adGroupId', $data) ? $data['adGroupId'] : $this->adGroupId;
            $this->androidDeepLink = array_key_exists('androidDeepLink', $data) ? $data['androidDeepLink'] : $this->androidDeepLink;
            $this->carouselAndroidDeepLinks = array_key_exists('carouselAndroidDeepLinks', $data) ? $data['carouselAndroidDeepLinks'] : $this->carouselAndroidDeepLinks;
            $this->carouselDestinationUrls = array_key_exists('carouselDestinationUrls', $data) ? $data['carouselDestinationUrls'] : $this->carouselDestinationUrls;
            $this->carouselIosDeepLinks = array_key_exists('carouselIosDeepLinks', $data) ? $data['carouselIosDeepLinks'] : $this->carouselIosDeepLinks;
            $this->clickTrackingUrl = array_key_exists('clickTrackingUrl', $data) ? $data['clickTrackingUrl'] : $this->clickTrackingUrl;
            $this->creativeType = array_key_exists('creativeType', $data) ? $data['creativeType'] : $this->creativeType;
            $this->destinationUrl = array_key_exists('destinationUrl', $data) ? $data['destinationUrl'] : $this->destinationUrl;
            $this->iosDeepLink = array_key_exists('iosDeepLink', $data) ? $data['iosDeepLink'] : $this->iosDeepLink;
            $this->isPinDeleted = array_key_exists('isPinDeleted', $data) ? $data['isPinDeleted'] : $this->isPinDeleted;
            $this->isRemovable = array_key_exists('isRemovable', $data) ? $data['isRemovable'] : $this->isRemovable;
            $this->name = array_key_exists('name', $data) ? $data['name'] : $this->name;
            $this->status = array_key_exists('status', $data) ? $data['status'] : $this->status;
            $this->trackingUrls = array_key_exists('trackingUrls', $data) ? $data['trackingUrls'] : $this->trackingUrls;
            $this->viewTrackingUrl = array_key_exists('viewTrackingUrl', $data) ? $data['viewTrackingUrl'] : $this->viewTrackingUrl;
            $this->leadFormId = array_key_exists('leadFormId', $data) ? $data['leadFormId'] : $this->leadFormId;
            $this->gridClickType = array_key_exists('gridClickType', $data) ? $data['gridClickType'] : $this->gridClickType;
            $this->customizableCtaType = array_key_exists('customizableCtaType', $data) ? $data['customizableCtaType'] : $this->customizableCtaType;
            $this->quizPinData = array_key_exists('quizPinData', $data) ? $data['quizPinData'] : $this->quizPinData;
        }
    }

    /**
     * Gets adGroupId.
     *
     * @return string|null
     */
    public function getAdGroupId(): ?string
    {
        return $this->adGroupId;
    }



    /**
     * Sets adGroupId.
     *
     * @param string|null $adGroupId  ID of the ad group that contains the ad.
     *
     * @return $this
     */
    public function setAdGroupId(?string $adGroupId = null): self
    {
        $this->adGroupId = $adGroupId;

        return $this;
    }

    /**
     * Gets androidDeepLink.
     *
     * @return string|null
     */
    public function getAndroidDeepLink(): ?string
    {
        return $this->androidDeepLink;
    }



    /**
     * Sets androidDeepLink.
     *
     * @param string|null $androidDeepLink  Deep link URL for Android devices. Not currently available. Using this field will generate an error.
     *
     * @return $this
     */
    public function setAndroidDeepLink(?string $androidDeepLink = null): self
    {
        $this->androidDeepLink = $androidDeepLink;

        return $this;
    }

    /**
     * Gets carouselAndroidDeepLinks.
     *
     * @return string[]|null
     */
    public function getCarouselAndroidDeepLinks(): ?array
    {
        return $this->carouselAndroidDeepLinks;
    }



    /**
     * Sets carouselAndroidDeepLinks.
     *
     * @param string[]|null $carouselAndroidDeepLinks  Comma-separated deep links for the carousel pin on Android.
     *
     * @return $this
     */
    public function setCarouselAndroidDeepLinks(?array $carouselAndroidDeepLinks = null): self
    {
        $this->carouselAndroidDeepLinks = $carouselAndroidDeepLinks;

        return $this;
    }

    /**
     * Gets carouselDestinationUrls.
     *
     * @return string[]|null
     */
    public function getCarouselDestinationUrls(): ?array
    {
        return $this->carouselDestinationUrls;
    }



    /**
     * Sets carouselDestinationUrls.
     *
     * @param string[]|null $carouselDestinationUrls  Comma-separated destination URLs for the carousel pin to promote.
     *
     * @return $this
     */
    public function setCarouselDestinationUrls(?array $carouselDestinationUrls = null): self
    {
        $this->carouselDestinationUrls = $carouselDestinationUrls;

        return $this;
    }

    /**
     * Gets carouselIosDeepLinks.
     *
     * @return string[]|null
     */
    public function getCarouselIosDeepLinks(): ?array
    {
        return $this->carouselIosDeepLinks;
    }



    /**
     * Sets carouselIosDeepLinks.
     *
     * @param string[]|null $carouselIosDeepLinks  Comma-separated deep links for the carousel pin on iOS.
     *
     * @return $this
     */
    public function setCarouselIosDeepLinks(?array $carouselIosDeepLinks = null): self
    {
        $this->carouselIosDeepLinks = $carouselIosDeepLinks;

        return $this;
    }

    /**
     * Gets clickTrackingUrl.
     *
     * @return string|null
     */
    public function getClickTrackingUrl(): ?string
    {
        return $this->clickTrackingUrl;
    }



    /**
     * Sets clickTrackingUrl.
     *
     * @param string|null $clickTrackingUrl  Tracking url for the ad clicks.
     *
     * @return $this
     */
    public function setClickTrackingUrl(?string $clickTrackingUrl = null): self
    {
        $this->clickTrackingUrl = $clickTrackingUrl;

        return $this;
    }

    /**
     * Gets creativeType.
     *
     * @return CreativeType|null
     */
    public function getCreativeType(): ?CreativeType
    {
        return $this->creativeType;
    }

    /**
    * Gets creativeType for serialization.
    *
    * @return string|null
    */
    public function getSerializedCreativeType(): string|null
    {
        return $this->creativeType?->value ? (string) $this->creativeType->value : null;
    }


    /**
     * Sets creativeType.
     *
     * @param CreativeType|null $creativeType
     *
     * @return $this
     */
    public function setCreativeType(?CreativeType $creativeType = null): self
    {
        $this->creativeType = $creativeType;

        return $this;
    }

    /**
     * Gets destinationUrl.
     *
     * @return string|null
     */
    public function getDestinationUrl(): ?string
    {
        return $this->destinationUrl;
    }



    /**
     * Sets destinationUrl.
     *
     * @param string|null $destinationUrl  Destination URL.
     *
     * @return $this
     */
    public function setDestinationUrl(?string $destinationUrl = null): self
    {
        $this->destinationUrl = $destinationUrl;

        return $this;
    }

    /**
     * Gets iosDeepLink.
     *
     * @return string|null
     */
    public function getIosDeepLink(): ?string
    {
        return $this->iosDeepLink;
    }



    /**
     * Sets iosDeepLink.
     *
     * @param string|null $iosDeepLink  Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
     *
     * @return $this
     */
    public function setIosDeepLink(?string $iosDeepLink = null): self
    {
        $this->iosDeepLink = $iosDeepLink;

        return $this;
    }

    /**
     * Gets isPinDeleted.
     *
     * @return bool|null
     */
    public function isIsPinDeleted(): ?bool
    {
        return $this->isPinDeleted;
    }



    /**
     * Sets isPinDeleted.
     *
     * @param bool|null $isPinDeleted  Is original pin deleted?
     *
     * @return $this
     */
    public function setIsPinDeleted(?bool $isPinDeleted = null): self
    {
        $this->isPinDeleted = $isPinDeleted;

        return $this;
    }

    /**
     * Gets isRemovable.
     *
     * @return bool|null
     */
    public function isIsRemovable(): ?bool
    {
        return $this->isRemovable;
    }



    /**
     * Sets isRemovable.
     *
     * @param bool|null $isRemovable  Is pin repinnable?
     *
     * @return $this
     */
    public function setIsRemovable(?bool $isRemovable = null): self
    {
        $this->isRemovable = $isRemovable;

        return $this;
    }

    /**
     * Gets name.
     *
     * @return string|null
     */
    public function getName(): ?string
    {
        return $this->name;
    }



    /**
     * Sets name.
     *
     * @param string|null $name  Name of the ad - 255 chars max.
     *
     * @return $this
     */
    public function setName(?string $name = null): self
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets status.
     *
     * @return EntityStatus|null
     */
    public function getStatus(): ?EntityStatus
    {
        return $this->status;
    }

    /**
    * Gets status for serialization.
    *
    * @return string|null
    */
    public function getSerializedStatus(): string|null
    {
        return $this->status?->value ? (string) $this->status->value : null;
    }


    /**
     * Sets status.
     *
     * @param EntityStatus|null $status
     *
     * @return $this
     */
    public function setStatus(?EntityStatus $status = null): self
    {
        $this->status = $status;

        return $this;
    }

    /**
     * Gets trackingUrls.
     *
     * @return AdCommonTrackingUrls|null
     */
    public function getTrackingUrls(): ?AdCommonTrackingUrls
    {
        return $this->trackingUrls;
    }



    /**
     * Sets trackingUrls.
     *
     * @param AdCommonTrackingUrls|null $trackingUrls
     *
     * @return $this
     */
    public function setTrackingUrls(?AdCommonTrackingUrls $trackingUrls = null): self
    {
        $this->trackingUrls = $trackingUrls;

        return $this;
    }

    /**
     * Gets viewTrackingUrl.
     *
     * @return string|null
     */
    public function getViewTrackingUrl(): ?string
    {
        return $this->viewTrackingUrl;
    }



    /**
     * Sets viewTrackingUrl.
     *
     * @param string|null $viewTrackingUrl  Tracking URL for ad impressions.
     *
     * @return $this
     */
    public function setViewTrackingUrl(?string $viewTrackingUrl = null): self
    {
        $this->viewTrackingUrl = $viewTrackingUrl;

        return $this;
    }

    /**
     * Gets leadFormId.
     *
     * @return string|null
     */
    public function getLeadFormId(): ?string
    {
        return $this->leadFormId;
    }



    /**
     * Sets leadFormId.
     *
     * @param string|null $leadFormId  Lead form ID for lead ad generation.
     *
     * @return $this
     */
    public function setLeadFormId(?string $leadFormId = null): self
    {
        $this->leadFormId = $leadFormId;

        return $this;
    }

    /**
     * Gets gridClickType.
     *
     * @return GridClickType|null
     */
    public function getGridClickType(): ?GridClickType
    {
        return $this->gridClickType;
    }

    /**
    * Gets gridClickType for serialization.
    *
    * @return string|null
    */
    public function getSerializedGridClickType(): string|null
    {
        return $this->gridClickType?->value ? (string) $this->gridClickType->value : null;
    }


    /**
     * Sets gridClickType.
     *
     * @param GridClickType|null $gridClickType
     *
     * @return $this
     */
    public function setGridClickType(?GridClickType $gridClickType = null): self
    {
        $this->gridClickType = $gridClickType;

        return $this;
    }

    /**
     * Gets customizableCtaType.
     *
     * @return string|null
     */
    public function getCustomizableCtaType(): ?string
    {
        return $this->customizableCtaType;
    }



    /**
     * Sets customizableCtaType.
     *
     * @param string|null $customizableCtaType  Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
     *
     * @return $this
     */
    public function setCustomizableCtaType(?string $customizableCtaType = null): self
    {
        $this->customizableCtaType = $customizableCtaType;

        return $this;
    }

    /**
     * Gets quizPinData.
     *
     * @return AdCommonQuizPinData|null
     */
    public function getQuizPinData(): ?AdCommonQuizPinData
    {
        return $this->quizPinData;
    }



    /**
     * Sets quizPinData.
     *
     * @param AdCommonQuizPinData|null $quizPinData
     *
     * @return $this
     */
    public function setQuizPinData(?AdCommonQuizPinData $quizPinData = null): self
    {
        $this->quizPinData = $quizPinData;

        return $this;
    }
}



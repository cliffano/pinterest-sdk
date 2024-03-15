<?php
/**
 * AdsCreditDiscountsResponse
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
 * Class representing the AdsCreditDiscountsResponse model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class AdsCreditDiscountsResponse 
{
        /**
     * True if the offer code is currently active.
     *
     * @var bool|null
     * @SerializedName("active")
     * @Assert\Type("bool")
     * @Type("bool")
     */
    protected ?bool $active = null;

    /**
     * Advertiser ID the offer was applied to.
     *
     * @var string|null
     * @SerializedName("advertiser_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Regex("/^\\d+$/")
     */
    protected ?string $advertiserId = null;

    /**
     * The type of discount of this credit
     *
     * @var string|null
     * @SerializedName("discountType")
     * @Assert\Choice({ "COUPON", "CREDIT", "COUPON_APPLIED", "CREDIT_APPLIED", "MARKETING_OFFER_CREDIT", "MARKETING_OFFER_CREDIT_APPLIED", "GOODWILL_CREDIT", "GOODWILL_CREDIT_APPLIED", "INTERNAL_CREDIT", "INTERNAL_CREDIT_APPLIED", "PREPAID_CREDIT", "PREPAID_CREDIT_APPLIED", "SALES_INCENTIVE_CREDIT", "SALES_INCENTIVE_CREDIT_APPLIED", "CREDIT_EXPIRED", "FUTURE_CREDIT", "REFERRAL_CREDIT", "INVOICE_SALES_INCENTIVE_CREDIT", "INVOICE_SALES_INCENTIVE_CREDIT_APPLIED", "PREPAID_CREDIT_REFUND", "null" })
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $discountType = null;

    /**
     * The discount applied in the offer’s currency value.
     *
     * @var float|null
     * @SerializedName("discountInMicroCurrency")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $discountInMicroCurrency = null;

    /**
     * Currency value for the discount.
     *
     * @var string|null
     * @SerializedName("discountCurrency")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $discountCurrency = null;

    /**
     * Human readable title of the offer code.
     *
     * @var string|null
     * @SerializedName("title")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $title = null;

    /**
     * The credits left to spend.
     *
     * @var float|null
     * @SerializedName("remainingDiscountInMicroCurrency")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected ?float $remainingDiscountInMicroCurrency = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->active = array_key_exists('active', $data) ? $data['active'] : $this->active;
            $this->advertiserId = array_key_exists('advertiserId', $data) ? $data['advertiserId'] : $this->advertiserId;
            $this->discountType = array_key_exists('discountType', $data) ? $data['discountType'] : $this->discountType;
            $this->discountInMicroCurrency = array_key_exists('discountInMicroCurrency', $data) ? $data['discountInMicroCurrency'] : $this->discountInMicroCurrency;
            $this->discountCurrency = array_key_exists('discountCurrency', $data) ? $data['discountCurrency'] : $this->discountCurrency;
            $this->title = array_key_exists('title', $data) ? $data['title'] : $this->title;
            $this->remainingDiscountInMicroCurrency = array_key_exists('remainingDiscountInMicroCurrency', $data) ? $data['remainingDiscountInMicroCurrency'] : $this->remainingDiscountInMicroCurrency;
        }
    }

    /**
     * Gets active.
     *
     * @return bool|null
     */
    public function isActive(): ?bool
    {
        return $this->active;
    }



    /**
     * Sets active.
     *
     * @param bool|null $active  True if the offer code is currently active.
     *
     * @return $this
     */
    public function setActive(?bool $active = null): self
    {
        $this->active = $active;

        return $this;
    }

    /**
     * Gets advertiserId.
     *
     * @return string|null
     */
    public function getAdvertiserId(): ?string
    {
        return $this->advertiserId;
    }



    /**
     * Sets advertiserId.
     *
     * @param string|null $advertiserId  Advertiser ID the offer was applied to.
     *
     * @return $this
     */
    public function setAdvertiserId(?string $advertiserId = null): self
    {
        $this->advertiserId = $advertiserId;

        return $this;
    }

    /**
     * Gets discountType.
     *
     * @return string|null
     */
    public function getDiscountType(): ?string
    {
        return $this->discountType;
    }



    /**
     * Sets discountType.
     *
     * @param string|null $discountType  The type of discount of this credit
     *
     * @return $this
     */
    public function setDiscountType(?string $discountType = null): self
    {
        $this->discountType = $discountType;

        return $this;
    }

    /**
     * Gets discountInMicroCurrency.
     *
     * @return float|null
     */
    public function getDiscountInMicroCurrency(): ?float
    {
        return $this->discountInMicroCurrency;
    }



    /**
     * Sets discountInMicroCurrency.
     *
     * @param float|null $discountInMicroCurrency  The discount applied in the offer’s currency value.
     *
     * @return $this
     */
    public function setDiscountInMicroCurrency(?float $discountInMicroCurrency = null): self
    {
        $this->discountInMicroCurrency = $discountInMicroCurrency;

        return $this;
    }

    /**
     * Gets discountCurrency.
     *
     * @return string|null
     */
    public function getDiscountCurrency(): ?string
    {
        return $this->discountCurrency;
    }



    /**
     * Sets discountCurrency.
     *
     * @param string|null $discountCurrency  Currency value for the discount.
     *
     * @return $this
     */
    public function setDiscountCurrency(?string $discountCurrency = null): self
    {
        $this->discountCurrency = $discountCurrency;

        return $this;
    }

    /**
     * Gets title.
     *
     * @return string|null
     */
    public function getTitle(): ?string
    {
        return $this->title;
    }



    /**
     * Sets title.
     *
     * @param string|null $title  Human readable title of the offer code.
     *
     * @return $this
     */
    public function setTitle(?string $title = null): self
    {
        $this->title = $title;

        return $this;
    }

    /**
     * Gets remainingDiscountInMicroCurrency.
     *
     * @return float|null
     */
    public function getRemainingDiscountInMicroCurrency(): ?float
    {
        return $this->remainingDiscountInMicroCurrency;
    }



    /**
     * Sets remainingDiscountInMicroCurrency.
     *
     * @param float|null $remainingDiscountInMicroCurrency  The credits left to spend.
     *
     * @return $this
     */
    public function setRemainingDiscountInMicroCurrency(?float $remainingDiscountInMicroCurrency = null): self
    {
        $this->remainingDiscountInMicroCurrency = $remainingDiscountInMicroCurrency;

        return $this;
    }
}



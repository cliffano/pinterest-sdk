<?php
/**
 * ItemAttributes
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
 * Contact: blah@cliffano.com
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
 * Class representing the ItemAttributes model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ItemAttributes 
{
        /**
     * Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://.
     *
     * @var string|null
     * @SerializedName("ad_link")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $adLink;

    /**
     * The links to additional images for your product. Up to five additional images can be used to show a product from different angles or to show different stages. Separate each additional image with a comma. We recommend enclosing the whole string with quotes. Must begin with http:// or https://
     *
     * @var string[]|null
     * @SerializedName("additional_image_link")
     * @Assert\All({
     *   @Assert\Type("string")
     * })
     * @Type("array<string>")
     */
    protected $additionalImageLink;

    /**
     * Set this attribute to TRUE if you&#39;re submitting items that are considered “adult”. These will not be shown on Pinterest.
     *
     * @var bool|null
     * @SerializedName("adult")
     * @Assert\Type("bool")
     * @Type("bool")
     */
    protected $adult;

    /**
     * The age group to apply a demographic range to the product. Must be one of the following values: ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, ‘adult’.
     *
     * @var string|null
     * @SerializedName("age_group")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $ageGroup;

    /**
     * The availability of the product. Must be one of the following values: ‘in stock’, ‘out of stock’, ‘preorder’.
     *
     * @var string|null
     * @SerializedName("availability")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $availability;

    /**
     * Average reviews for the item. Can be a number from 1-5.
     *
     * @var float|null
     * @SerializedName("average_review_rating")
     * @Assert\Type("float")
     * @Type("float")
     */
    protected $averageReviewRating;

    /**
     * The brand of the product.
     *
     * @var string|null
     * @SerializedName("brand")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $brand;

    /**
     * The primary color of the product.
     *
     * @var string|null
     * @SerializedName("color")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $color;

    /**
     * The condition of the product. Must be one of the following values: ‘new’, ‘used’, ‘refurbished’.
     *
     * @var string|null
     * @SerializedName("condition")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $condition;

    /**
     * Custom grouping of products.
     *
     * @var string|null
     * @SerializedName("custom_label_0")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 1000
     * )
     */
    protected $customLabel0;

    /**
     * Custom grouping of products.
     *
     * @var string|null
     * @SerializedName("custom_label_1")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 1000
     * )
     */
    protected $customLabel1;

    /**
     * Custom grouping of products.
     *
     * @var string|null
     * @SerializedName("custom_label_2")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 1000
     * )
     */
    protected $customLabel2;

    /**
     * Custom grouping of products.
     *
     * @var string|null
     * @SerializedName("custom_label_3")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 1000
     * )
     */
    protected $customLabel3;

    /**
     * Custom grouping of products.
     *
     * @var string|null
     * @SerializedName("custom_label_4")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 1000
     * )
     */
    protected $customLabel4;

    /**
     * The description of the product.
     *
     * @var string|null
     * @SerializedName("description")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 10000
     * )
     */
    protected $description;

    /**
     * The item is free to ship.
     *
     * @var bool|null
     * @SerializedName("free_shipping_label")
     * @Assert\Type("bool")
     * @Type("bool")
     */
    protected $freeShippingLabel;

    /**
     * The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered.
     *
     * @var string|null
     * @SerializedName("free_shipping_limit")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $freeShippingLimit;

    /**
     * The gender associated with the product. Must be one of the following values: ‘male’, ‘female’, ‘unisex’.
     *
     * @var string|null
     * @SerializedName("gender")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $gender;

    /**
     * The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted.
     *
     * @var string|null
     * @SerializedName("google_product_category")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $googleProductCategory;

    /**
     * The unique universal product identifier.
     *
     * @var int|null
     * @SerializedName("gtin")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $gtin;

    /**
     * The user-created unique ID that represents the product. Only Unicode characters are accepted.
     *
     * @var string|null
     * @SerializedName("id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 127
     * )
     */
    protected $id;

    /**
     * The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https://
     *
     * @var string[]|null
     * @SerializedName("image_link")
     * @Assert\All({
     *   @Assert\Type("string")
     * })
     * @Type("array<string>")
     * @Assert\Count(
     *   min = 1
     * )
     */
    protected $imageLink;

    /**
     * The parent ID of the product.
     *
     * @var string|null
     * @SerializedName("item_group_id")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 127
     * )
     */
    protected $itemGroupId;

    /**
     * The millisecond timestamp when the item was lastly modified by the merchant.
     *
     * @var int|null
     * @SerializedName("last_updated_time")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $lastUpdatedTime;

    /**
     * The landing page for the product.
     *
     * @var string|null
     * @SerializedName("link")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 511
     * )
     */
    protected $link;

    /**
     * The material used to make the product.
     *
     * @var string|null
     * @SerializedName("material")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $material;

    /**
     * The minimum advertised price of the product. It supports the following formats, \&quot;19.99 USD\&quot;, \&quot;19.99USD\&quot; and \&quot;19.99\&quot;. If the currency is not included, we default to US dollars.
     *
     * @var string|null
     * @SerializedName("min_ad_price")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $minAdPrice;

    /**
     * The mobile-optimized version of your landing page. Must begin with http:// or https://.
     *
     * @var string|null
     * @SerializedName("mobile_link")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $mobileLink;

    /**
     * Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer.
     *
     * @var string|null
     * @SerializedName("mpn")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $mpn;

    /**
     * The number of ratings for the item.
     *
     * @var int|null
     * @SerializedName("number_of_ratings")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $numberOfRatings;

    /**
     * The number of reviews available for the item.
     *
     * @var int|null
     * @SerializedName("number_of_reviews")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $numberOfReviews;

    /**
     * The description of the pattern used for the product.
     *
     * @var string|null
     * @SerializedName("pattern")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $pattern;

    /**
     * The price of the product. It supports the following formats, \&quot;24.99 USD\&quot;, \&quot;24.99USD\&quot; and \&quot;24.99\&quot;. If the currency is not included, we default to US dollars.
     *
     * @var string|null
     * @SerializedName("price")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $price;

    /**
     * The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ &gt; “. The &gt; must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.
     *
     * @var string|null
     * @SerializedName("product_type")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 1000
     * )
     */
    protected $productType;

    /**
     * The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \&quot;14.99 USD\&quot;, \&quot;14.99USD\&quot; and \&quot;14.99\&quot;. If the currency is not included, we default to US dollars.
     *
     * @var string|null
     * @SerializedName("sale_price")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $salePrice;

    /**
     * Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required.
     *
     * @var string|null
     * @SerializedName("shipping")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $shipping;

    /**
     * The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
     *
     * @var string|null
     * @SerializedName("shipping_height")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $shippingHeight;

    /**
     * The weight of the product. Ensure there is a space between the numeric string and the metric.
     *
     * @var string|null
     * @SerializedName("shipping_weight")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $shippingWeight;

    /**
     * The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
     *
     * @var string|null
     * @SerializedName("shipping_width")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $shippingWidth;

    /**
     * The size of the product.
     *
     * @var string|null
     * @SerializedName("size")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $size;

    /**
     * Indicates the country’s sizing system in which you are submitting your product.
     *
     * @var string|null
     * @SerializedName("size_system")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $sizeSystem;

    /**
     * Additional description for the size. Must be one of the following values: ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, ‘maternity’.
     *
     * @var string|null
     * @SerializedName("size_type")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $sizeType;

    /**
     * Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required.
     *
     * @var string|null
     * @SerializedName("tax")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $tax;

    /**
     * The name of the product.
     *
     * @var string|null
     * @SerializedName("title")
     * @Assert\Type("string")
     * @Type("string")
     * @Assert\Length(
     *   max = 500
     * )
     */
    protected $title;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->adLink = isset($data['adLink']) ? $data['adLink'] : null;
        $this->additionalImageLink = isset($data['additionalImageLink']) ? $data['additionalImageLink'] : null;
        $this->adult = isset($data['adult']) ? $data['adult'] : null;
        $this->ageGroup = isset($data['ageGroup']) ? $data['ageGroup'] : null;
        $this->availability = isset($data['availability']) ? $data['availability'] : null;
        $this->averageReviewRating = isset($data['averageReviewRating']) ? $data['averageReviewRating'] : null;
        $this->brand = isset($data['brand']) ? $data['brand'] : null;
        $this->color = isset($data['color']) ? $data['color'] : null;
        $this->condition = isset($data['condition']) ? $data['condition'] : null;
        $this->customLabel0 = isset($data['customLabel0']) ? $data['customLabel0'] : null;
        $this->customLabel1 = isset($data['customLabel1']) ? $data['customLabel1'] : null;
        $this->customLabel2 = isset($data['customLabel2']) ? $data['customLabel2'] : null;
        $this->customLabel3 = isset($data['customLabel3']) ? $data['customLabel3'] : null;
        $this->customLabel4 = isset($data['customLabel4']) ? $data['customLabel4'] : null;
        $this->description = isset($data['description']) ? $data['description'] : null;
        $this->freeShippingLabel = isset($data['freeShippingLabel']) ? $data['freeShippingLabel'] : null;
        $this->freeShippingLimit = isset($data['freeShippingLimit']) ? $data['freeShippingLimit'] : null;
        $this->gender = isset($data['gender']) ? $data['gender'] : null;
        $this->googleProductCategory = isset($data['googleProductCategory']) ? $data['googleProductCategory'] : null;
        $this->gtin = isset($data['gtin']) ? $data['gtin'] : null;
        $this->id = isset($data['id']) ? $data['id'] : null;
        $this->imageLink = isset($data['imageLink']) ? $data['imageLink'] : null;
        $this->itemGroupId = isset($data['itemGroupId']) ? $data['itemGroupId'] : null;
        $this->lastUpdatedTime = isset($data['lastUpdatedTime']) ? $data['lastUpdatedTime'] : null;
        $this->link = isset($data['link']) ? $data['link'] : null;
        $this->material = isset($data['material']) ? $data['material'] : null;
        $this->minAdPrice = isset($data['minAdPrice']) ? $data['minAdPrice'] : null;
        $this->mobileLink = isset($data['mobileLink']) ? $data['mobileLink'] : null;
        $this->mpn = isset($data['mpn']) ? $data['mpn'] : null;
        $this->numberOfRatings = isset($data['numberOfRatings']) ? $data['numberOfRatings'] : null;
        $this->numberOfReviews = isset($data['numberOfReviews']) ? $data['numberOfReviews'] : null;
        $this->pattern = isset($data['pattern']) ? $data['pattern'] : null;
        $this->price = isset($data['price']) ? $data['price'] : null;
        $this->productType = isset($data['productType']) ? $data['productType'] : null;
        $this->salePrice = isset($data['salePrice']) ? $data['salePrice'] : null;
        $this->shipping = isset($data['shipping']) ? $data['shipping'] : null;
        $this->shippingHeight = isset($data['shippingHeight']) ? $data['shippingHeight'] : null;
        $this->shippingWeight = isset($data['shippingWeight']) ? $data['shippingWeight'] : null;
        $this->shippingWidth = isset($data['shippingWidth']) ? $data['shippingWidth'] : null;
        $this->size = isset($data['size']) ? $data['size'] : null;
        $this->sizeSystem = isset($data['sizeSystem']) ? $data['sizeSystem'] : null;
        $this->sizeType = isset($data['sizeType']) ? $data['sizeType'] : null;
        $this->tax = isset($data['tax']) ? $data['tax'] : null;
        $this->title = isset($data['title']) ? $data['title'] : null;
    }

    /**
     * Gets adLink.
     *
     * @return string|null
     */
    public function getAdLink()
    {
        return $this->adLink;
    }

    /**
     * Sets adLink.
     *
     * @param string|null $adLink  Allows advertisers to specify a separate URL that can be used to track traffic coming from Pinterest shopping ads. Must send full URL including tracking—do not send tracking parameters only. At this time we do not support impression tracking. Must begin with http:// or https://.
     *
     * @return $this
     */
    public function setAdLink($adLink = null)
    {
        $this->adLink = $adLink;

        return $this;
    }

    /**
     * Gets additionalImageLink.
     *
     * @return string[]|null
     */
    public function getAdditionalImageLink(): ?array
    {
        return $this->additionalImageLink;
    }

    /**
     * Sets additionalImageLink.
     *
     * @param string[]|null $additionalImageLink  The links to additional images for your product. Up to five additional images can be used to show a product from different angles or to show different stages. Separate each additional image with a comma. We recommend enclosing the whole string with quotes. Must begin with http:// or https://
     *
     * @return $this
     */
    public function setAdditionalImageLink(array $additionalImageLink = null)
    {
        $this->additionalImageLink = $additionalImageLink;

        return $this;
    }

    /**
     * Gets adult.
     *
     * @return bool|null
     */
    public function isAdult()
    {
        return $this->adult;
    }

    /**
     * Sets adult.
     *
     * @param bool|null $adult  Set this attribute to TRUE if you're submitting items that are considered “adult”. These will not be shown on Pinterest.
     *
     * @return $this
     */
    public function setAdult($adult = null)
    {
        $this->adult = $adult;

        return $this;
    }

    /**
     * Gets ageGroup.
     *
     * @return string|null
     */
    public function getAgeGroup()
    {
        return $this->ageGroup;
    }

    /**
     * Sets ageGroup.
     *
     * @param string|null $ageGroup  The age group to apply a demographic range to the product. Must be one of the following values: ‘newborn’, ‘infant’, ‘toddler’, ‘kids’, ‘adult’.
     *
     * @return $this
     */
    public function setAgeGroup($ageGroup = null)
    {
        $this->ageGroup = $ageGroup;

        return $this;
    }

    /**
     * Gets availability.
     *
     * @return string|null
     */
    public function getAvailability()
    {
        return $this->availability;
    }

    /**
     * Sets availability.
     *
     * @param string|null $availability  The availability of the product. Must be one of the following values: ‘in stock’, ‘out of stock’, ‘preorder’.
     *
     * @return $this
     */
    public function setAvailability($availability = null)
    {
        $this->availability = $availability;

        return $this;
    }

    /**
     * Gets averageReviewRating.
     *
     * @return float|null
     */
    public function getAverageReviewRating()
    {
        return $this->averageReviewRating;
    }

    /**
     * Sets averageReviewRating.
     *
     * @param float|null $averageReviewRating  Average reviews for the item. Can be a number from 1-5.
     *
     * @return $this
     */
    public function setAverageReviewRating($averageReviewRating = null)
    {
        $this->averageReviewRating = $averageReviewRating;

        return $this;
    }

    /**
     * Gets brand.
     *
     * @return string|null
     */
    public function getBrand()
    {
        return $this->brand;
    }

    /**
     * Sets brand.
     *
     * @param string|null $brand  The brand of the product.
     *
     * @return $this
     */
    public function setBrand($brand = null)
    {
        $this->brand = $brand;

        return $this;
    }

    /**
     * Gets color.
     *
     * @return string|null
     */
    public function getColor()
    {
        return $this->color;
    }

    /**
     * Sets color.
     *
     * @param string|null $color  The primary color of the product.
     *
     * @return $this
     */
    public function setColor($color = null)
    {
        $this->color = $color;

        return $this;
    }

    /**
     * Gets condition.
     *
     * @return string|null
     */
    public function getCondition()
    {
        return $this->condition;
    }

    /**
     * Sets condition.
     *
     * @param string|null $condition  The condition of the product. Must be one of the following values: ‘new’, ‘used’, ‘refurbished’.
     *
     * @return $this
     */
    public function setCondition($condition = null)
    {
        $this->condition = $condition;

        return $this;
    }

    /**
     * Gets customLabel0.
     *
     * @return string|null
     */
    public function getCustomLabel0()
    {
        return $this->customLabel0;
    }

    /**
     * Sets customLabel0.
     *
     * @param string|null $customLabel0  Custom grouping of products.
     *
     * @return $this
     */
    public function setCustomLabel0($customLabel0 = null)
    {
        $this->customLabel0 = $customLabel0;

        return $this;
    }

    /**
     * Gets customLabel1.
     *
     * @return string|null
     */
    public function getCustomLabel1()
    {
        return $this->customLabel1;
    }

    /**
     * Sets customLabel1.
     *
     * @param string|null $customLabel1  Custom grouping of products.
     *
     * @return $this
     */
    public function setCustomLabel1($customLabel1 = null)
    {
        $this->customLabel1 = $customLabel1;

        return $this;
    }

    /**
     * Gets customLabel2.
     *
     * @return string|null
     */
    public function getCustomLabel2()
    {
        return $this->customLabel2;
    }

    /**
     * Sets customLabel2.
     *
     * @param string|null $customLabel2  Custom grouping of products.
     *
     * @return $this
     */
    public function setCustomLabel2($customLabel2 = null)
    {
        $this->customLabel2 = $customLabel2;

        return $this;
    }

    /**
     * Gets customLabel3.
     *
     * @return string|null
     */
    public function getCustomLabel3()
    {
        return $this->customLabel3;
    }

    /**
     * Sets customLabel3.
     *
     * @param string|null $customLabel3  Custom grouping of products.
     *
     * @return $this
     */
    public function setCustomLabel3($customLabel3 = null)
    {
        $this->customLabel3 = $customLabel3;

        return $this;
    }

    /**
     * Gets customLabel4.
     *
     * @return string|null
     */
    public function getCustomLabel4()
    {
        return $this->customLabel4;
    }

    /**
     * Sets customLabel4.
     *
     * @param string|null $customLabel4  Custom grouping of products.
     *
     * @return $this
     */
    public function setCustomLabel4($customLabel4 = null)
    {
        $this->customLabel4 = $customLabel4;

        return $this;
    }

    /**
     * Gets description.
     *
     * @return string|null
     */
    public function getDescription()
    {
        return $this->description;
    }

    /**
     * Sets description.
     *
     * @param string|null $description  The description of the product.
     *
     * @return $this
     */
    public function setDescription($description = null)
    {
        $this->description = $description;

        return $this;
    }

    /**
     * Gets freeShippingLabel.
     *
     * @return bool|null
     */
    public function isFreeShippingLabel()
    {
        return $this->freeShippingLabel;
    }

    /**
     * Sets freeShippingLabel.
     *
     * @param bool|null $freeShippingLabel  The item is free to ship.
     *
     * @return $this
     */
    public function setFreeShippingLabel($freeShippingLabel = null)
    {
        $this->freeShippingLabel = $freeShippingLabel;

        return $this;
    }

    /**
     * Gets freeShippingLimit.
     *
     * @return string|null
     */
    public function getFreeShippingLimit()
    {
        return $this->freeShippingLimit;
    }

    /**
     * Sets freeShippingLimit.
     *
     * @param string|null $freeShippingLimit  The minimum order purchase necessary for the customer to get free shipping. Only relevant if free shipping is offered.
     *
     * @return $this
     */
    public function setFreeShippingLimit($freeShippingLimit = null)
    {
        $this->freeShippingLimit = $freeShippingLimit;

        return $this;
    }

    /**
     * Gets gender.
     *
     * @return string|null
     */
    public function getGender()
    {
        return $this->gender;
    }

    /**
     * Sets gender.
     *
     * @param string|null $gender  The gender associated with the product. Must be one of the following values: ‘male’, ‘female’, ‘unisex’.
     *
     * @return $this
     */
    public function setGender($gender = null)
    {
        $this->gender = $gender;

        return $this;
    }

    /**
     * Gets googleProductCategory.
     *
     * @return string|null
     */
    public function getGoogleProductCategory()
    {
        return $this->googleProductCategory;
    }

    /**
     * Sets googleProductCategory.
     *
     * @param string|null $googleProductCategory  The categorization of the product based on the standardized Google Product Taxonomy. This is a set taxonomy. Both the text values and numeric codes are accepted.
     *
     * @return $this
     */
    public function setGoogleProductCategory($googleProductCategory = null)
    {
        $this->googleProductCategory = $googleProductCategory;

        return $this;
    }

    /**
     * Gets gtin.
     *
     * @return int|null
     */
    public function getGtin()
    {
        return $this->gtin;
    }

    /**
     * Sets gtin.
     *
     * @param int|null $gtin  The unique universal product identifier.
     *
     * @return $this
     */
    public function setGtin($gtin = null)
    {
        $this->gtin = $gtin;

        return $this;
    }

    /**
     * Gets id.
     *
     * @return string|null
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * Sets id.
     *
     * @param string|null $id  The user-created unique ID that represents the product. Only Unicode characters are accepted.
     *
     * @return $this
     */
    public function setId($id = null)
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets imageLink.
     *
     * @return string[]|null
     */
    public function getImageLink(): ?array
    {
        return $this->imageLink;
    }

    /**
     * Sets imageLink.
     *
     * @param string[]|null $imageLink  The link to the main product images. Images should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your product. The URL of your image_link must be accessible by the Pinterest user-agent, and send the accurate images. Please make sure there are no template or placeholder images at the link. Must start with http:// or https://
     *
     * @return $this
     */
    public function setImageLink(array $imageLink = null)
    {
        $this->imageLink = $imageLink;

        return $this;
    }

    /**
     * Gets itemGroupId.
     *
     * @return string|null
     */
    public function getItemGroupId()
    {
        return $this->itemGroupId;
    }

    /**
     * Sets itemGroupId.
     *
     * @param string|null $itemGroupId  The parent ID of the product.
     *
     * @return $this
     */
    public function setItemGroupId($itemGroupId = null)
    {
        $this->itemGroupId = $itemGroupId;

        return $this;
    }

    /**
     * Gets lastUpdatedTime.
     *
     * @return int|null
     */
    public function getLastUpdatedTime()
    {
        return $this->lastUpdatedTime;
    }

    /**
     * Sets lastUpdatedTime.
     *
     * @param int|null $lastUpdatedTime  The millisecond timestamp when the item was lastly modified by the merchant.
     *
     * @return $this
     */
    public function setLastUpdatedTime($lastUpdatedTime = null)
    {
        $this->lastUpdatedTime = $lastUpdatedTime;

        return $this;
    }

    /**
     * Gets link.
     *
     * @return string|null
     */
    public function getLink()
    {
        return $this->link;
    }

    /**
     * Sets link.
     *
     * @param string|null $link  The landing page for the product.
     *
     * @return $this
     */
    public function setLink($link = null)
    {
        $this->link = $link;

        return $this;
    }

    /**
     * Gets material.
     *
     * @return string|null
     */
    public function getMaterial()
    {
        return $this->material;
    }

    /**
     * Sets material.
     *
     * @param string|null $material  The material used to make the product.
     *
     * @return $this
     */
    public function setMaterial($material = null)
    {
        $this->material = $material;

        return $this;
    }

    /**
     * Gets minAdPrice.
     *
     * @return string|null
     */
    public function getMinAdPrice()
    {
        return $this->minAdPrice;
    }

    /**
     * Sets minAdPrice.
     *
     * @param string|null $minAdPrice  The minimum advertised price of the product. It supports the following formats, \"19.99 USD\", \"19.99USD\" and \"19.99\". If the currency is not included, we default to US dollars.
     *
     * @return $this
     */
    public function setMinAdPrice($minAdPrice = null)
    {
        $this->minAdPrice = $minAdPrice;

        return $this;
    }

    /**
     * Gets mobileLink.
     *
     * @return string|null
     */
    public function getMobileLink()
    {
        return $this->mobileLink;
    }

    /**
     * Sets mobileLink.
     *
     * @param string|null $mobileLink  The mobile-optimized version of your landing page. Must begin with http:// or https://.
     *
     * @return $this
     */
    public function setMobileLink($mobileLink = null)
    {
        $this->mobileLink = $mobileLink;

        return $this;
    }

    /**
     * Gets mpn.
     *
     * @return string|null
     */
    public function getMpn()
    {
        return $this->mpn;
    }

    /**
     * Sets mpn.
     *
     * @param string|null $mpn  Manufacturer Part Number are alpha-numeric codes created by the manufacturer of a product to uniquely identify it among all products from the same manufacturer.
     *
     * @return $this
     */
    public function setMpn($mpn = null)
    {
        $this->mpn = $mpn;

        return $this;
    }

    /**
     * Gets numberOfRatings.
     *
     * @return int|null
     */
    public function getNumberOfRatings()
    {
        return $this->numberOfRatings;
    }

    /**
     * Sets numberOfRatings.
     *
     * @param int|null $numberOfRatings  The number of ratings for the item.
     *
     * @return $this
     */
    public function setNumberOfRatings($numberOfRatings = null)
    {
        $this->numberOfRatings = $numberOfRatings;

        return $this;
    }

    /**
     * Gets numberOfReviews.
     *
     * @return int|null
     */
    public function getNumberOfReviews()
    {
        return $this->numberOfReviews;
    }

    /**
     * Sets numberOfReviews.
     *
     * @param int|null $numberOfReviews  The number of reviews available for the item.
     *
     * @return $this
     */
    public function setNumberOfReviews($numberOfReviews = null)
    {
        $this->numberOfReviews = $numberOfReviews;

        return $this;
    }

    /**
     * Gets pattern.
     *
     * @return string|null
     */
    public function getPattern()
    {
        return $this->pattern;
    }

    /**
     * Sets pattern.
     *
     * @param string|null $pattern  The description of the pattern used for the product.
     *
     * @return $this
     */
    public function setPattern($pattern = null)
    {
        $this->pattern = $pattern;

        return $this;
    }

    /**
     * Gets price.
     *
     * @return string|null
     */
    public function getPrice()
    {
        return $this->price;
    }

    /**
     * Sets price.
     *
     * @param string|null $price  The price of the product. It supports the following formats, \"24.99 USD\", \"24.99USD\" and \"24.99\". If the currency is not included, we default to US dollars.
     *
     * @return $this
     */
    public function setPrice($price = null)
    {
        $this->price = $price;

        return $this;
    }

    /**
     * Gets productType.
     *
     * @return string|null
     */
    public function getProductType()
    {
        return $this->productType;
    }

    /**
     * Sets productType.
     *
     * @param string|null $productType  The categorization of your product based on your custom product taxonomy. Subcategories must be sent separated by “ > “. The > must be wrapped by spaces. We do not recognize any other delimiters such as comma or pipe.
     *
     * @return $this
     */
    public function setProductType($productType = null)
    {
        $this->productType = $productType;

        return $this;
    }

    /**
     * Gets salePrice.
     *
     * @return string|null
     */
    public function getSalePrice()
    {
        return $this->salePrice;
    }

    /**
     * Sets salePrice.
     *
     * @param string|null $salePrice  The discounted price of the product. The sale_price must be lower than the price. It supports the following formats, \"14.99 USD\", \"14.99USD\" and \"14.99\". If the currency is not included, we default to US dollars.
     *
     * @return $this
     */
    public function setSalePrice($salePrice = null)
    {
        $this->salePrice = $salePrice;

        return $this;
    }

    /**
     * Gets shipping.
     *
     * @return string|null
     */
    public function getShipping()
    {
        return $this->shipping;
    }

    /**
     * Sets shipping.
     *
     * @param string|null $shipping  Shipping consists of one group of up to four elements, country, region, service (all optional) and price (required). All colons, even for blank values, are required.
     *
     * @return $this
     */
    public function setShipping($shipping = null)
    {
        $this->shipping = $shipping;

        return $this;
    }

    /**
     * Gets shippingHeight.
     *
     * @return string|null
     */
    public function getShippingHeight()
    {
        return $this->shippingHeight;
    }

    /**
     * Sets shippingHeight.
     *
     * @param string|null $shippingHeight  The height of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
     *
     * @return $this
     */
    public function setShippingHeight($shippingHeight = null)
    {
        $this->shippingHeight = $shippingHeight;

        return $this;
    }

    /**
     * Gets shippingWeight.
     *
     * @return string|null
     */
    public function getShippingWeight()
    {
        return $this->shippingWeight;
    }

    /**
     * Sets shippingWeight.
     *
     * @param string|null $shippingWeight  The weight of the product. Ensure there is a space between the numeric string and the metric.
     *
     * @return $this
     */
    public function setShippingWeight($shippingWeight = null)
    {
        $this->shippingWeight = $shippingWeight;

        return $this;
    }

    /**
     * Gets shippingWidth.
     *
     * @return string|null
     */
    public function getShippingWidth()
    {
        return $this->shippingWidth;
    }

    /**
     * Sets shippingWidth.
     *
     * @param string|null $shippingWidth  The width of the package needed to ship the product. Ensure there is a space between the numeric string and the metric.
     *
     * @return $this
     */
    public function setShippingWidth($shippingWidth = null)
    {
        $this->shippingWidth = $shippingWidth;

        return $this;
    }

    /**
     * Gets size.
     *
     * @return string|null
     */
    public function getSize()
    {
        return $this->size;
    }

    /**
     * Sets size.
     *
     * @param string|null $size  The size of the product.
     *
     * @return $this
     */
    public function setSize($size = null)
    {
        $this->size = $size;

        return $this;
    }

    /**
     * Gets sizeSystem.
     *
     * @return string|null
     */
    public function getSizeSystem()
    {
        return $this->sizeSystem;
    }

    /**
     * Sets sizeSystem.
     *
     * @param string|null $sizeSystem  Indicates the country’s sizing system in which you are submitting your product.
     *
     * @return $this
     */
    public function setSizeSystem($sizeSystem = null)
    {
        $this->sizeSystem = $sizeSystem;

        return $this;
    }

    /**
     * Gets sizeType.
     *
     * @return string|null
     */
    public function getSizeType()
    {
        return $this->sizeType;
    }

    /**
     * Sets sizeType.
     *
     * @param string|null $sizeType  Additional description for the size. Must be one of the following values: ‘regular’, ‘petite’, ‘plus’, ‘big_and_tall’, ‘maternity’.
     *
     * @return $this
     */
    public function setSizeType($sizeType = null)
    {
        $this->sizeType = $sizeType;

        return $this;
    }

    /**
     * Gets tax.
     *
     * @return string|null
     */
    public function getTax()
    {
        return $this->tax;
    }

    /**
     * Sets tax.
     *
     * @param string|null $tax  Tax consists of one group of up to four elements, country, region, rate (all required) and tax_ship (optional). All colons, even for blank values, are required.
     *
     * @return $this
     */
    public function setTax($tax = null)
    {
        $this->tax = $tax;

        return $this;
    }

    /**
     * Gets title.
     *
     * @return string|null
     */
    public function getTitle()
    {
        return $this->title;
    }

    /**
     * Sets title.
     *
     * @param string|null $title  The name of the product.
     *
     * @return $this
     */
    public function setTitle($title = null)
    {
        $this->title = $title;

        return $this;
    }
}



<?php
/**
 * MinPriceFilter
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
 * Class representing the MinPriceFilter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class MinPriceFilter 
{
        /**
     * @var CatalogsProductGroupPricingCriteria|null
     * @SerializedName("MIN_PRICE")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupPricingCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupPricingCriteria")
     */
    protected ?CatalogsProductGroupPricingCriteria $mINPRICE = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->mINPRICE = array_key_exists('mINPRICE', $data) ? $data['mINPRICE'] : $this->mINPRICE;
        }
    }

    /**
     * Gets mINPRICE.
     *
     * @return CatalogsProductGroupPricingCriteria|null
     */
    public function getMINPRICE(): ?CatalogsProductGroupPricingCriteria
    {
        return $this->mINPRICE;
    }



    /**
     * Sets mINPRICE.
     *
     * @param CatalogsProductGroupPricingCriteria|null $mINPRICE
     *
     * @return $this
     */
    public function setMINPRICE(?CatalogsProductGroupPricingCriteria $mINPRICE): self
    {
        $this->mINPRICE = $mINPRICE;

        return $this;
    }
}


<?php
/**
 * ProductType3Filter
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
 * Class representing the ProductType3Filter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class ProductType3Filter 
{
        /**
     * @var CatalogsProductGroupMultipleStringListCriteria|null
     * @SerializedName("PRODUCT_TYPE_3")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria")
     */
    protected ?CatalogsProductGroupMultipleStringListCriteria $pRODUCTTYPE3 = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->pRODUCTTYPE3 = array_key_exists('pRODUCTTYPE3', $data) ? $data['pRODUCTTYPE3'] : $this->pRODUCTTYPE3;
        }
    }

    /**
     * Gets pRODUCTTYPE3.
     *
     * @return CatalogsProductGroupMultipleStringListCriteria|null
     */
    public function getPRODUCTTYPE3(): ?CatalogsProductGroupMultipleStringListCriteria
    {
        return $this->pRODUCTTYPE3;
    }



    /**
     * Sets pRODUCTTYPE3.
     *
     * @param CatalogsProductGroupMultipleStringListCriteria|null $pRODUCTTYPE3
     *
     * @return $this
     */
    public function setPRODUCTTYPE3(?CatalogsProductGroupMultipleStringListCriteria $pRODUCTTYPE3): self
    {
        $this->pRODUCTTYPE3 = $pRODUCTTYPE3;

        return $this;
    }
}



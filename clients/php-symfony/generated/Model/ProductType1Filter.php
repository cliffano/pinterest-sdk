<?php
/**
 * ProductType1Filter
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
 * Class representing the ProductType1Filter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ProductType1Filter 
{
        /**
     * @var OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria
     * @SerializedName("PRODUCT_TYPE_1")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria")
     */
    protected $pRODUCTTYPE1;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->pRODUCTTYPE1 = isset($data['pRODUCTTYPE1']) ? $data['pRODUCTTYPE1'] : null;
    }

    /**
     * Gets pRODUCTTYPE1.
     *
     * @return OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria
     */
    public function getPRODUCTTYPE1(): CatalogsProductGroupMultipleStringListCriteria
    {
        return $this->pRODUCTTYPE1;
    }

    /**
     * Sets pRODUCTTYPE1.
     *
     * @param OpenAPI\Server\Model\CatalogsProductGroupMultipleStringListCriteria $pRODUCTTYPE1
     *
     * @return $this
     */
    public function setPRODUCTTYPE1(CatalogsProductGroupMultipleStringListCriteria $pRODUCTTYPE1)
    {
        $this->pRODUCTTYPE1 = $pRODUCTTYPE1;

        return $this;
    }
}



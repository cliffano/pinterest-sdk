<?php
/**
 * CustomLabel0Filter
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
 * Class representing the CustomLabel0Filter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class CustomLabel0Filter 
{
        /**
     * @var OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria
     * @SerializedName("CUSTOM_LABEL_0")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria")
     */
    protected $cUSTOMLABEL0;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->cUSTOMLABEL0 = isset($data['cUSTOMLABEL0']) ? $data['cUSTOMLABEL0'] : null;
    }

    /**
     * Gets cUSTOMLABEL0.
     *
     * @return OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria
     */
    public function getCUSTOMLABEL0(): CatalogsProductGroupMultipleStringCriteria
    {
        return $this->cUSTOMLABEL0;
    }

    /**
     * Sets cUSTOMLABEL0.
     *
     * @param OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria $cUSTOMLABEL0
     *
     * @return $this
     */
    public function setCUSTOMLABEL0(CatalogsProductGroupMultipleStringCriteria $cUSTOMLABEL0)
    {
        $this->cUSTOMLABEL0 = $cUSTOMLABEL0;

        return $this;
    }
}



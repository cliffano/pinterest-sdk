<?php
/**
 * BrandFilter
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
 * Class representing the BrandFilter model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class BrandFilter 
{
        /**
     * @var OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria
     * @SerializedName("BRAND")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria")
     * @Type("OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria")
     */
    protected $bRAND;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->bRAND = isset($data['bRAND']) ? $data['bRAND'] : null;
    }

    /**
     * Gets bRAND.
     *
     * @return OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria
     */
    public function getBRAND(): CatalogsProductGroupMultipleStringCriteria
    {
        return $this->bRAND;
    }

    /**
     * Sets bRAND.
     *
     * @param OpenAPI\Server\Model\CatalogsProductGroupMultipleStringCriteria $bRAND
     *
     * @return $this
     */
    public function setBRAND(CatalogsProductGroupMultipleStringCriteria $bRAND)
    {
        $this->bRAND = $bRAND;

        return $this;
    }
}



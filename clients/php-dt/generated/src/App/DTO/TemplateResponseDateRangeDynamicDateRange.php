<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 * The dynamic date range of the template
 */
class TemplateResponseDateRangeDynamicDateRange
{
    /**
     * The date range type
     * @DTA\Data(field="type", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     */
    public ?string $type = null;

    /**
     * The dynamic range type
     * @DTA\Data(field="range", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     */
    public ?string $range = null;

}

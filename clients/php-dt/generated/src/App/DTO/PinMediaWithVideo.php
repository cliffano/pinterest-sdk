<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 * Pin with video.
 */
class PinMediaWithVideo
{
    /**
     * @DTA\Data(field="media_type", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     */
    public ?string $media_type = null;

    /**
     * @DTA\Data(field="images", nullable=true)
     * @DTA\Strategy(name="Object", options={"type":\App\DTO\ImageMetadataImages::class})
     * @DTA\Validator(name="TypeCompliant", options={"type":\App\DTO\ImageMetadataImages::class})
     */
    public ?\App\DTO\ImageMetadataImages $images = null;

    /**
     * @DTA\Data(field="cover_image_url", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     */
    public ?string $cover_image_url = null;

    /**
     * Video url (720p). &lt;/p&gt;&lt;strong&gt;Note:&lt;/strong&gt; This field is limited and not available to all apps.
     * @DTA\Data(field="video_url", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     */
    public ?string $video_url = null;

    /**
     * Duration (in milliseconds)
     * @DTA\Data(field="duration", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"float"})
     */
    public ?float $duration = null;

    /**
     * Height (in pixels)
     * @DTA\Data(field="height", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"int"})
     */
    public ?int $height = null;

    /**
     * Width (in pixels)
     * @DTA\Data(field="width", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"int"})
     */
    public ?int $width = null;

}

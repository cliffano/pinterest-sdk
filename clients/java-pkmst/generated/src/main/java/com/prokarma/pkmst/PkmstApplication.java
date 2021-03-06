package com.prokarma.pkmst;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import springfox.documentation.swagger2.annotations.EnableSwagger2;

/**
 * starts the spring boot application
 * @author pkmst
 *
 */

@SpringBootApplication
@EnableSwagger2
public class PkmstApplication {

  private static final Logger LOGGER = LoggerFactory.getLogger(PkmstApplication.class);

  public static void main(String[] args) {
    LOGGER.debug("Running spring boot application");
    SpringApplication.run(PkmstApplication.class, args);
  }
}

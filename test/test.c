#include <kvadrat.h>
#include <ctest.h>

CTEST(kvadrat, data_1)
{
    // Given
    const float a = 0.0;

    // When
    const float result = skvadrat(a);

    // Then
    const float exp = 0.0;
    ASSERT_DBL_NEAR(exp, result);
}

CTEST(kvadrat, data_2)
{
    // Given
    const float a = 1.0;

    // When
    const float result = skvadrat(a);

    // Then
    const float expected = 1.0;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(kvadrat, data_3)
{
    // Given
    const float a = -3.0;

    // When
    const float result = skvadrat(a);

    // Then
    const float expected = 9.0;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(kvadrat, data_4)
{
    // Given
    const float a = 10;

    // When
    const float result = skvadrat(a);

    // Then
    const float expected = 100;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(kvadrat, data_5)
{
    // Given
    const float a = -20;

    // When
    const float result = skvadrat(a);

    // Then
    const float expected = 400;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(kvadrat, data_6)
{
    // Given
    const float a = 100;

    // When
    const float result = skvadrat(a);

    // Then
    const float expected = 10000;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(kvadrat, data_7)
{
    // Given
    const float a = -0.1;

    // When
    const float result = skvadrat(a);

    // Then
    const float expected = 0.01;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(kvadrat, data_8)
{
    // Given
    const float a = -0.5;

    // When
    const float result = skvadrat(a);

    // Then
    const float expected = 0.25;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(kvadrat, data_9)
{
    // Given
    const float a = -9;

    // When
    const float result = skvadrat(a);

    // Then
    const float expected = 81;
    ASSERT_DBL_NEAR(expected, result);
}


CTEST(kvadrat, data_10)
{
    // Given
    const float a = 0.04;

    // When
    const float result = skvadrat(a);

    // Then
    const float expected = 0.0016;
    ASSERT_DBL_NEAR(expected, result);
}




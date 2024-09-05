in settings.py
STATIC_URL = '/static/'  # Correcting mismatched quotes
MEDIA_URL = '/media/'  # Use correct URL format

STATICFILES_DIRS = [BASE_DIR / 'static']  # Correcting the path and removing invalid characters
MEDIA_ROOT = BASE_DIR / 'media'  # Correcting the quote

in urls.py
from django.conf import settings
from django.conf.urls.static import static

if settings.DEBUG:
    urlpatterns += static(settings.STATIC_URL, document_root=settings.STATIC_ROOT)  # Corrected the dash
    urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)  # Corrected the dash

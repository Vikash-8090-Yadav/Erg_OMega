
from django.urls import path , include

from .import views

urlpatterns = [
    path('dg/',views.learndg),
    path('html/',views.learnhtml),
    path('css/',views.learncss),
    path('python/',views.learnpython),
]

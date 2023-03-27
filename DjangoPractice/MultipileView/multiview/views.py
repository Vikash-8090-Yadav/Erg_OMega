from django.shortcuts import render

# Create your views here.
from django.http import HttpResponse
def Home(request):
    return HttpResponse('Hey this  is Home page,Welocme ')

def Course(request):
    return HttpResponse("Hey this  is the django course!")

def Fees(request):
    return HttpResponse("The price of the course is 20k")

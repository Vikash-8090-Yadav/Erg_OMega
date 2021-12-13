from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def dgfess(request):
	return HttpResponse('<h1> 300</h1>')



def pythonfess(request):
	return HttpResponse('<h1> 200</h1>')



def cssfess(request):
	return HttpResponse('<h1> 250</h1>')


def htmlfess(request):
	return HttpResponse('<h1> 150</h1>')
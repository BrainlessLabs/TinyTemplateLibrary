//  memory.hpp
//
//  Copyright (c) 2003 Eugene Gladyshev
//
//  Permission to copy, use, modify, sell and distribute this software
//  is granted provided this copyright notice appears in all copies.
//  This software is provided "as is" without express or implied
//  warranty, and with no claim as to its suitability for any purpose.
//

#ifndef __TTL_MEMORY_INCLUDED__
#define __TTL_MEMORY_INCLUDED__

#ifndef __TTL_COMPILER_CONFIG_INCLUDED__
#include <ttl/config/compiler_config.hpp>
#endif

#ifndef __TTL_CONFIG_INCLUDED__
#include <ttl/config.hpp>
#endif

#ifndef __TTL_EXCEPTION_INCLUDED__
#include <ttl/exception.hpp>
#endif

#ifndef __STD_MALLOC_INCLUDED__
#define __STD_MALLOC_INCLUDED__
#include <malloc.h>
#endif

#ifndef __STD_STDLIB_INCLUDED__
#define __STD_STDLIB_INCLUDED__
#include <stdlib.h>
#endif

namespace ttl{namespace mem{

	template< typename A >
	typename A::pointer create()
	{
		A a;
		typename A::pointer p = a.allocate(1,0);
		try
		{
			new( p ) typename A::value_type;
		}
		catch( ttl::exception& )
		{
			a.deallocate(p,1);
			throw;
		}
		catch( std::exception& )
		{
			a.deallocate(p,1);
			throw;
		}
		return p;
	}

	template< typename A >
	typename A::pointer create( const typename A::value_type& v )
	{
		A a;
		typename A::pointer p = a.allocate(1,0);
		try
		{
			new( p ) typename A::value_type(v);
		}
		catch( ttl::exception& )
		{
			a.deallocate(p,1);
			throw;
		}
		catch( std::exception& )
		{
			a.deallocate(p,1);
			throw;
		}
		return p;
	}
	
	template< typename A, typename P1 >
	typename A::pointer create( P1 p1 )
	{
		A a;
		typename A::pointer p = a.allocate(1,0);
		try
		{
			new( p ) typename A::value_type(p1);
		}
		catch( ttl::exception& )
		{
			a.deallocate(p,1);
			throw;
		}
		catch( std::exception& )
		{
			a.deallocate(p,1);
			throw;
		}
		return p;
	}
	
	template< typename A, typename P1, typename P2 >
	typename A::pointer create( P1 p1, P2 p2 )
	{
		A a;
		typename A::pointer p = a.allocate(1,0);
		try
		{
			new( p ) typename A::value_type(p1, p2);
		}
		catch( ttl::exception& )
		{
			a.deallocate(p,1);
			throw;
		}
		catch( std::exception& )
		{
			a.deallocate(p,1);
			throw;
		}
		return p;
	}
	
	template< typename A >
	void destroy( typename A::pointer p )
	{
		A a;
		typedef typename A::value_type type;
		try
		{
			p->~type();
		}
		catch( ttl::exception& )
		{
			a.deallocate(p,1);
			throw;
		}
		catch( std::exception& )
		{
			a.deallocate(p,1);
			throw;
		}
		a.deallocate(p,1);
	}
	
	struct memtraits
	{
		template< typename T >
		struct allocator : std::allocator<T>
		{
		};
	};

   //aligned_malloc
   //http://jongampark.wordpress.com/2008/06/12/implementation-of-aligned-memory-alloc/
   //http://www.stlsoft.org/documentation.html
   //http://www.careercup.com/question?id=2777
   //http://www.gamasutra.com/view/feature/132334/data_alignment_part_1.php?print=1
   //http://arbiter.sevensinsystems.com/?p=15
   //http://msdn.microsoft.com/en-us/library/8z34s9c6.aspx
   //http://www.kernel.org/doc/man-pages/online/pages/man3/posix_memalign.3.html
   //http://cottonvibes.blogspot.in/2011/01/dynamically-allocate-aligned-memory.html
   void* aligned_malloc(size_t size, size_t alignment)
   {
      void* retVal = NULL;
#if defined(TTL_MSVC)
      retVal = _aligned_malloc(size,alignment);
#elif defined(TTL_GCC)
   #if (_POSIX_C_SOURCE >= 200112L) || (_XOPEN_SOURCE >= 600)
      posix_memalign(&retVal,alignment,size);
   #else
   #endif
#endif
      return retVal;
   }

   void aligned_free (void *mem)
   {
      if(NULL == mem)
      {
         return;
      }
#if defined(TTL_MSVC)
      _aligned_free(mem);
#elif defined(TTL_GCC)
   #if (_POSIX_C_SOURCE >= 200112L) || (_XOPEN_SOURCE >= 600)
      free(mem);
   #else
   #endif
#endif
   }

}
}

#endif// __TTL_MEMORY_INCLUDED__

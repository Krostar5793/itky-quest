'use client';

import Link from 'next/link';

const HeadLine = () => {
  return (
    <>
      <div className="mb-8 flex">
        <div className='flex-col space-y-4'>
          <h1 className='font-sanserif text-4xl font-bold drop-shadow-lg md:text-5xl'>Welcome, Developpers!</h1>
          <div className='flex justify-center'>
            <Link href={'/dashboard/edit'} className='rounded-full bg-black px-4 py-2 text-white shadow-lg hover:scale-110'>
              <p className='font-bold'>編集する</p>
            </Link>
          </div>
        </div>
      </div>
    </>
  );
};

export default HeadLine;

'use client';

import Link from 'next/link';
import { IconContext } from 'react-icons';
import { FaGithub } from 'react-icons/fa';

const Header = () => {
  return (
    <header className='sticky flex h-20 items-center'>
      <div className='ml-auto px-[8vw]'>
        <Link href={'https://github.com/Krostar5793/itky-quest'} target='blank'>
          <IconContext.Provider value={{ size: '40px', color:'black'}}>
            <FaGithub />
          </IconContext.Provider>
        </Link>
      </div>
    </header>
  );
};

export default Header;

'use client';

import Fab from '@mui/material/Fab';
import AddIcon from '@mui/icons-material/Add';

const Edit = () => {
  return (
    <>
      <div className='absolute bottom-0 right-0 p-12'>
        <Fab aria-label='add'>
          <AddIcon/>
        </Fab>
      </div>
    </>
  );
};

export default Edit;

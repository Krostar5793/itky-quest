'use client';

import { useState } from 'react';
import Loading from '@/app/components/Loading';
import Box from '@mui/material/Box';
import Button from '@mui/material/Button';
import Typography from '@mui/material/Typography';
import Modal from '@mui/material/Modal';
import Fab from '@mui/material/Fab';
import AddIcon from '@mui/icons-material/Add';
import IconButton from '@mui/material/IconButton';
import CloseIcon from '@mui/icons-material/Close';

const style = {
  position: 'absolute' as 'absolute',
  top: '50%',
  left: '50%',
  transform: 'translate(-50%, -50%)',
  height: '86vh',
  width: '86vw',
  bgcolor: 'background.paper',
  boxShadow: 24,
  px: 4,
  py: 2
};

const closeButtonStyle = {
  height: 0,
  textAlign: 'right'
};

const Edit = () => {
  const [loading, setLoading] = useState(false);
  const [open, setOpen] = useState(false);
  const handleOpen = () => setOpen(true);
  const handleClose = () => setOpen(false);

  const handleSubmit = async ( e: React.FormEvent<HTMLFormElement> ): Promise<void> => {
    e.preventDefault();
    const formData = new FormData(e.currentTarget);
    const data = Object.fromEntries(formData.entries());

    try {
      const res = await fetch('/api/edit/', {
        method: 'POST',
        headers: {
          'Content-Type': 'application/json',
        },
        body: JSON.stringify(data),
      });

      if ( !res.ok ) throw new Error('Network response was not ok');

    } catch ( e ) {
      console.error('There was a problem with your fetch operation:', e);
    }
  };

  return (
    <>
      <Modal
        open={open}
        onClose={handleClose}
        aria-labelledby="modal-modal-title"
        aria-describedby="modal-modal-description"
      >
        <Box sx={style}>
          <Box sx={closeButtonStyle}>
            <IconButton onClick={handleClose}>
              <CloseIcon />
            </IconButton>
          </Box>
          <form onSubmit={handleSubmit} className='mt-8'>
            {/* 編集対象の選択 */}
            <div className='mb-5 flex space-x-2'>
              <div>
                <select
                  className='w-full rounded-md border px-3 py-2 focus:border-sky-500 focus:outline-none'
                  id='editType'
                >
                  <option>Monsters</option>
                  <option>Weapons</option>
                  <option>Armors</option>
                  <option>Items</option>
                  <option>Materials</option>
                </select>
              </div>
              <p className='py-2'>を追加する</p>
            </div>
            

            {/* 名前の入力 */}
            <div className='mb-5'>
              <div className='mb-1 text-sm font-bold'>名前</div>
              <input
                type='text'
                className='w-full rounded-md border px-3 py-2 focus:border-sky-500 focus:outline-none'
                placeholder='名前'
                id='name'
                required
              />
            </div>

            {/* レア度の選択 */}
            <div className='flex space-x-8'>
              <div className='mb-5 flex-1'>
                <div className='mb-1 text-sm font-bold'>レア度</div>
                <select
                  className='w-full rounded-md border px-3 py-2 focus:border-sky-500 focus:outline-none'
                  id='rarity'
                >
                  <option>1</option>
                  <option>2</option>
                  <option>3</option>
                  <option>4</option>
                  <option>5</option>
                </select>
              </div>

              {/* 価格の入力 */}
              <div className='mb-5 flex-1'>
                <div className='mb-1 text-sm font-bold'>価格</div>
                <input
                  type='number'
                  className='w-full rounded-md border px-3 py-2 focus:border-sky-500 focus:outline'
                  placeholder='価格'
                  id='price'
                />
              </div>
            </div>

            {/* 使用可能時の選択 */}
            <div className='mb-5'>
              <div className='mb-1 text-sm font-bold'>使用可能時</div>
              <select
                className='w-full rounded-md border px-3 py-2 focus:border-sky-500 focus:outline-none'
                id='rarity'
              >
                <option>メニュー画面</option>
                <option>戦闘画面</option>
                <option>常時</option>
                <option>使用不可</option>
              </select>
            </div>

            {/* 説明の入力 */}
            <div className='mb-5'>
              <div className='mb-1 text-sm font-bold'>説明</div>
              <textarea
                className='w-full rounded-md border px-3 py-2 focus:border-sky-500 focus:outline-none'
                placeholder='説明'
                id='content'
              />
            </div>

            {/* 使用効果 */}
            <div className='mb-5'>
              <div className='mb-1 text-sm font-bold'>使用効果</div>
              <textarea
                className='w-full rounded-md border px-3 py-2 focus:border-sky-500 focus:outline-none'
                placeholder='使用効果'
                id='effect'
              />
            </div>

            {/* 消費の有無 */}
            <div className='mb-5 flex space-x-4'>
              <div className='mb-1 text-sm font-bold'>消費の有無</div>
              <div>
                <input type='radio' id='consumable' name='isConsumable' value='consumable' defaultChecked={true} />
                <label htmlFor='consumable'>あり</label>
              </div>
              <div>
                <input type='radio' id='unconsumable' name='isConsumable' value='unconsumable' />
                <label htmlFor='unconsumable'>なし</label>
              </div>
            </div>

            {/* 変更ボタン */}
            <div className='mb-5'>
              {loading ? (
                <Loading />
              ) : (
                <button
                  type='submit'
                  className='w-full rounded-full bg-sky-400 p-2 text-sm font-bold text-white'
                >
                  変更
                </button>
              )}
            </div>
          </form>
        </Box>
      </Modal>
      <div onClick={handleOpen} className='absolute bottom-0 right-0 p-12'>
        <Fab color='primary' aria-label='add'>
          <AddIcon />
        </Fab>
      </div>
    </>
  );
};

export default Edit;

#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xb37740c, "vb2_ioctl_reqbufs" },
	{ 0x1b222146, "vchiq_mmal_port_set_format" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8fa6094a, "v4l2_event_unsubscribe" },
	{ 0x10e225c5, "vchiq_mmal_port_disable" },
	{ 0x18c21f47, "video_device_release_empty" },
	{ 0x1b9ef33d, "media_device_unregister_entity" },
	{ 0x210ec49c, "media_devnode_create" },
	{ 0x253f1a5f, "vchiq_mmal_port_parameter_set" },
	{ 0x1e35a32d, "vb2_wait_for_all_buffers" },
	{ 0x140dd485, "v4l2_device_unregister" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x7ad2821, "vb2_fop_poll" },
	{ 0xabfa79a3, "vb2_ioctl_streamon" },
	{ 0xcb00c57, "__video_register_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x78911096, "v4l2_device_register" },
	{ 0x7833880e, "media_remove_intf_links" },
	{ 0x5f5c6b51, "vchiq_mmal_component_finalise" },
	{ 0x3627532, "vb2_fop_mmap" },
	{ 0x90b86462, "vb2_ioctl_qbuf" },
	{ 0x33700033, "v4l2_event_subscribe" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3f529d29, "video_unregister_device" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0xdf22bf16, "vc_sm_cma_import_dmabuf" },
	{ 0x689cb425, "v4l2_ctrl_subscribe_event" },
	{ 0x4b1a3a2d, "vb2_plane_vaddr" },
	{ 0xa5a3c487, "vb2_buffer_done" },
	{ 0x69234131, "dma_buf_put" },
	{ 0xaa1fd904, "dma_buf_get" },
	{ 0x59274055, "vchiq_mmal_component_enable" },
	{ 0xc1426e05, "vb2_ioctl_prepare_buf" },
	{ 0x2be93da8, "v4l2_ctrl_new_custom" },
	{ 0x38ac6638, "vb2_ioctl_create_bufs" },
	{ 0xcc5164c6, "vb2_ioctl_dqbuf" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x7393eb03, "media_device_cleanup" },
	{ 0xcbaee58b, "media_device_register_entity" },
	{ 0x85cef54e, "vchiq_mmal_component_init" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x31f40b3b, "vb2_fop_release" },
	{ 0x5519e4ca, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbb38098, "vchiq_mmal_component_disable" },
	{ 0x92997ed8, "_printk" },
	{ 0x113f8fc5, "mmal_vchi_buffer_init" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xa149f723, "media_create_pad_link" },
	{ 0xb1d1f5d5, "media_entity_remove_links" },
	{ 0x6938be15, "media_create_intf_link" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x5f9af18a, "v4l2_fh_open" },
	{ 0x94703bfb, "vchiq_mmal_port_enable" },
	{ 0xa8d83a3a, "vb2_ioctl_querybuf" },
	{ 0xf6108b66, "__media_device_register" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0x41330af, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0xca111076, "vchiq_mmal_submit_buffer" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4481bf1e, "media_device_init" },
	{ 0xc31d4976, "vb2_ioctl_expbuf" },
	{ 0x25e5c348, "mmal_vchi_buffer_cleanup" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xad4121a3, "vb2_ioctl_streamoff" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x73477a6e, "vb2_queue_release" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0xcf0af84f, "media_device_unregister" },
	{ 0xab372da2, "video_ioctl2" },
	{ 0x604b91d8, "vb2_core_expbuf_dmabuf" },
	{ 0xbe0e15a5, "media_devnode_remove" },
	{ 0x2cbed9df, "vchiq_mmal_port_parameter_get" },
	{ 0x91369769, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,bcm2835-mmal-vchiq,videodev,mc,videobuf2-common,vc-sm-cma,videobuf2-dma-contig");


MODULE_INFO(srcversion, "B9BEFB302A0357E3F4538C2");
